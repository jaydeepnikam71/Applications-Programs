
//3. Write application which accept file name from user and read all data from that file and display contents on screen.

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<String.h>

int main()
{
    int fd=0;
    int iRet=0;

    char FName[30];
    char Arr[100]={'\0'};

    printf("Enter the name of file that you want to open : \n");
    scanf("%s",FName);

    fd=open(FName,O_RDWR);

    if(fd==-1)
    {
        printf("Unable to open file");
    }
    else
    {
        printf("%s file gets open successfully %d\n",FName,fd);

        while((iRet=read(fd,Arr,sizeof(Arr)))!=0)
        {
            printf("%s",Arr);
        }
        close(fd);
    }
    return 0;
}