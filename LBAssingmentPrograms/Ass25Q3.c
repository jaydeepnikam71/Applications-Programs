//3. Accept Character from user. If char is capital then display all the characters from input characters till Z or vice versa or keep it is as.

#include<stdio.h>
#include<stdlib.h>

void Display(char ch)
{
    int iCnt = 0;

    if(ch>='A' && ch<='Z')
    {
        for(iCnt=ch;iCnt<='Z';iCnt++)
        {
            printf("%c\t",iCnt);
        }
    }
    else if(ch>='a' && ch<='z')
    {
        for(iCnt=ch;iCnt>='a';iCnt--)
        {
            printf("%c\t",iCnt);
        }
    }
    else
    {
        return;
    }
}

int main()
{
    char cValue = '\0';
    
    printf("Enter the character : \n");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;
}