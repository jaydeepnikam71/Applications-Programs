
//4.Write a program which accepts file name and one character from user and count number of occurences of that characters from that file.

#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>

int CountChar(char FName[], char Ch)
{
    int fd = 0;
    int jRet=0;
    int count=0;
    char Arr[100]={'\0'};

    fd=open(FName,O_RDONLY);

    if(fd==-1)
    {
        printf("Unable to open file\n");
    }
    else
    {
        printf("%s File gets successfully open with fd %d\n",FName,fd);

        while((jRet=read(fd,Arr,sizeof(Arr)))!=0)
        {
            for(int i=0;i<jRet;i++)
            {
                if(Arr[i]==Ch)
                {
                    count++;
                }
            }
        }
        close(fd);
    }
    return count;
}

int main()
{
    int iRet=0;
    char FileName[20];
    char cValue;

    printf("Enter file name : \n");
    scanf("%s",FileName);

    printf("Enter the character :\n");
    scanf(" %c",&cValue);

    iRet=CountChar(FileName,cValue);

    printf("Frequency is : %d",iRet);

    return 0;
}
