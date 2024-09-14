//4. Accept Character from user and check wheather it is small case or not (a-z).

#include<stdio.h>
#include<stdlib.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL ChkSmall(char ch)
{
    if(ch>='a' && ch<='z')
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

    bRet=ChkSmall(cValue);

    if(bRet==TRUE)
    {
        printf("It is Small Case Character");
    }
    else
    {
        printf("It is not a Small Case Character");
    }
    return 0;
}