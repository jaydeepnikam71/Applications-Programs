// 1.Write a program which accept string from user and accept one character. Check wheather that character is present in string or not.

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkChar(char *str,char ch)
{
    while(*str !='\0')
    {
        if(ch>='A' && ch<='z')
        {
            if(*str==ch)
            {
                return TRUE;
            }
            else
            {
                return FALSE;
            }
            *str++;
        }
    }
}

int main()
{
    char arr[20];
    char cValue='\0';
    BOOL bRet=FALSE;

    printf("Enter String : \n");
    scanf("%[^'\n]s",arr);

    printf("Enter the character : \n");
    scanf(" %c",&cValue);

    bRet=ChkChar(arr,cValue);

    if(bRet==TRUE)
    {
        printf("Character found \n");
    }
    else
    {
        printf("Character not found \n");
    }

    return 0;

}