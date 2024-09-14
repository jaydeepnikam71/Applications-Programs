//1. Write application which accept file name from user and open that file in read mode.

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    int fd=0;
    char Arr[30];

    printf("Enter the name of file that open in read mode : \n");
    scanf("%s",Arr);

    fd=open(Arr,O_RDONLY);

    if(fd==-1)
    {
        printf("Unable to open file");
    }
    else
    {
        printf("File opened successfully");
        close(fd);
    }
    return 0;
}

