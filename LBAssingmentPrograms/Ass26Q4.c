//4. Write a program which accept string from user and check wheather it contains vowels in it or not.

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL ChkVowels(char str[])
{
    
    int iCnt=0;
    while(*str !='\0')
    {
        if((*str=='a') || (*str=='e') || (*str=='i')|| (*str=='o') || (*str=='u') || (*str=='A') || (*str=='E') || (*str=='I') || (*str=='O') || (*str=='U'))
        {
            iCnt++;
        }
        str++;
    }

    if(iCnt>0)
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
    char Arr[20];
    BOOL bRet=FALSE;

    printf("Enter the String :\n");
    scanf("%[^'\n']s",Arr);

    bRet=ChkVowels(Arr);

    if(bRet==TRUE)
    {
        printf("Contains Vowels");
    }
    else
    {
        printf("There is no Vowel");
    }
    
    return 0;
}
