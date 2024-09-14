//1. Accept Character from user and check wheather it is alphabet or not (A-Z a-z).

#include<stdio.h>
#include<stdlib.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL ChkAlpha(char ch)
{
    if((ch>='A' && ch<='Z') || (ch>='a' && ch<='z'))
    {
        return TRUE;
    }
    else 
    {
        return FALSE;
    }
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter the character : ");
    scanf(" %c",&cValue);

    bRet=ChkAlpha(cValue);

    if(bRet==TRUE)
    {
        printf("It is Character");
    }
    else
    {
        printf("It is not a Character");
    }
    return 0;
}