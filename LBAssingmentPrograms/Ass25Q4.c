//4. Accept Character from user and check wheather it is special symbol or not (!,@,#,$,%,^,&,*).

#include<stdio.h>
#include<stdlib.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL ChkSpecial(char ch)
{
    if(ch=='!' || ch=='@' || ch=='#' || ch=='$' || ch=='%' || ch=='^' || ch=='&' || ch=='*')
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

    bRet=ChkSpecial(cValue);

    if(bRet==TRUE)
    {
        printf("It is special Character");
    }
    else
    {
        printf("It is not a special Character");
    }
    return 0;
}