//3.Write A recursive program which accept string from user and count number of characters.

#include<stdio.h>

int Strlen(char *str)
{
    static int count=0;

    if(*str>='A' && *str<='Z' || *str>='a' && *str<='z')
    {
        count++;
        *str++;
        Strlen(str);
    }
    return count;
}

int main()
{
    char arr[20];
    int iRet=0;

    printf("Enter String : ");
    scanf("%s",arr);

    iRet = Strlen(arr);
    printf("%d",iRet);

    return 0;
}