
//4. Write application which accept file name from user and display size of file.

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    int fd =0;

    char FileName[20];
    char Arr[100]={'\0'};
    int iRet=0;
    int iCnt=0;

    printf("Enter the name of file that you want to open : \n");
    scanf("%s",FileName);

    fd = open(FileName,O_RDWR);

    if(fd==-1)
    {
        printf("Unable to open file");
    }
    else
    {
        printf("%s file gets open successfully %d\n",FileName,fd);

        while((iRet=read(fd,Arr,sizeof(Arr)))!=0)
        {
            iCnt=iCnt+iRet;
        }
        printf("File size is %d bytes",iCnt);
        close(fd);
    }
    return 0;
}