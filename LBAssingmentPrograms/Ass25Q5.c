//5. Accept Character from user and display its ASCII value in decimal,octal and hexadecimal format.

#include<stdio.h>
#include<stdlib.h>

void Display(char ch)
{
    printf("ASCII Value in Decimal : %d\n",ch);
    printf("ASCII Value in HexaDecimal : %x\n",ch);
    printf("ASCII Value in Octal : %o\n",ch);
}

int main()
{
    char cValue = '\0';

    printf("Enter the character : \n");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;
}
