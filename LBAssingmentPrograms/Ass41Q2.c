
//2. Write application which accept file name from user and create that file.

#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>

int main()
{
    int fd=0;

    char Arr[30];

    printf("Enter the name of file that you want to create : \n");
    scanf("%s",Arr);

    fd=creat(Arr,0777);

    if(fd==-1)
    {
        printf("Unable to open file");
    }
    else
    {
        printf("File created successfully");
        close(fd);
    }
    return 0;
}
