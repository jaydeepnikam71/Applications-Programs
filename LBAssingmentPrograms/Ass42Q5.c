
// 5.Write a program which accepts file name and one number from user and read that number of characters from starting position.

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

void DisplayN(char FName[],int iSize)
{
    int fd=0;
    int iRet=0;
    int iCnt=0;
    char Arr[iSize];
    
    fd=open(FName,O_RDONLY);

    if(fd==-1)
    {
        printf("Unable to open file\n");
    }
    else
    {
        printf("%s file gets successfully open with fd %d \n",FName,fd);

        iRet=read(fd,Arr,sizeof(Arr));

        printf("%s",Arr);
        close(fd);
    }
}

int main()
{
    char FileName[30];
    int iNo=0;

    printf("Enter File Name :\n");
    scanf("%s",FileName);

    printf("Enter the number of characters :\n");
    scanf("%d",&iNo);

    DisplayN(FileName,iNo);

    return 0;
}
