// 5.Accept one character from user and check wheather that character is vowel(a,e,i,o,u) or not.

#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

int  ChkVowel( char Cvalue )
{
    if( Cvalue=='a' || Cvalue=='e' || Cvalue=='i'|| Cvalue=='o' || Cvalue=='u' || Cvalue=='A' || Cvalue=='E' || Cvalue=='I'|| Cvalue=='O' || Cvalue=='U')
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
    char cValue ='\0';
    BOOL bRet = FALSE;

    printf("Enter character\n");
    scanf("%c",&cValue);

    bRet=ChkVowel(cValue);
    if(bRet==TRUE)
    {
        printf("It is Vowel");
    }
    else
    {
        printf("It is not Vowel");
    }
    return 0;
}