
//5.Write application which accept file name from user and one string from user. Write that string aat the end of file.

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

int main()
{
    int fd =0;

    char FileName[20];
    char Arr[100]={'\0'};
    int iRet=0;

    printf("Enter the name of file that you want to open : \n");
    scanf("%s",FileName);

    fd = open(FileName,O_RDWR | O_APPEND);

    if(fd==-1)
    {
        printf("Unable to open file");
    }
    else
    {
        printf("Enter the string you want to write inside the file : \n");
        scanf(" %[^'\n']s",Arr);

        iRet=write(fd,Arr,strlen(Arr));

        close(fd);
    }
    return 0;
}