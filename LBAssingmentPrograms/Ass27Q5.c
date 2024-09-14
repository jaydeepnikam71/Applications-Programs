// 5.Write a program which accept string from user and count number of white spaces.

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int CountWhite(char *str)
{
    int iCount=0;

    while(*str !='\0')
    {
        if(*str==' ')
        {
            iCount++;
        }
        *str++;
    }
    return iCount;
}

int main()
{
    char arr[20];
    int iRet=0;

    printf("Enter String : \n");
    scanf("%[^'\n]s",arr);

    iRet=CountWhite(arr);

    printf("%d",iRet);

    return 0;

}