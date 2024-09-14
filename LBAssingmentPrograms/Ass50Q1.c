//1.Write A recursive program which accept string from user and count white space.

#include<stdio.h>

int WhiteSpace(char *str)
{
    static int count=0;

    if(*str!='\0')
    {
        if(*str==' ')
        {
            count++;
            *str++;
            WhiteSpace(str);
        }
    }
    return count;
}

int main()
{
    char arr[20];
    int iRet=0;

    printf("Enter String : ");
    scanf("%s",arr);

    iRet = WhiteSpace(arr);
    printf("%d",iRet);

    return 0;
}