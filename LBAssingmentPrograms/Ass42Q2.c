
//2.Write a program which accepts file name from user and count number of small characters from that file.

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

int CountSmall(char FName[])
{
    int fd = 0;
    int iRet=0;
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

        while((iRet=read(fd,Arr,sizeof(Arr)))!=0)
        {
            for(int i=0;i<iRet;i++)
            {
                if(Arr[i]>='a' && Arr[i]<='z')
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

    printf("Enter file name : \n");
    scanf("%s",FileName);

    iRet=CountSmall(FileName);

    printf("Number of small characters are : %d",iRet);

    return 0;
}