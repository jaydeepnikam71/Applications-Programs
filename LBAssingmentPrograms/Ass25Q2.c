//2. Accept Character from user. If char is small then make it capital or vice versa or keep it is as.

#include<stdio.h>
#include<stdlib.h>

void Display(char ch)
{
    int iSum=0;
    if(ch>='A' && ch<='Z')
    {
        iSum  = ch + 32;
        printf("\n%c",iSum);
    }
    else if(ch>='a' && ch<='z')
    {
        iSum  = ch - 32;
        printf("\n%c",iSum);
    }
    else
    {
        printf("\n%c",ch);
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