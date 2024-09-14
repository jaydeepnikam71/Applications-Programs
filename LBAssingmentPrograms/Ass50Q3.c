//3.Write A recursive program which accept string from user and count number of small characters.

#include<stdio.h>

int Small(char *str)
{
    static int count=0;

    if(*str>='a' && *str<='z')
    {
        count++;
        *str++;
        Small(str);
    }
    return count;
}

int main()
{
    char arr[20];
    int iRet=0;

    printf("Enter String : ");
    scanf("%s",arr);

    iRet = Small(arr);
    printf("%d",iRet);

    return 0;
}