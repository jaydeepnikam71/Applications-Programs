//1.Write a program which display ASCII table. Table contains Symbol, Decimal ,HexaDecimal and Octal representation of every member from 0 to 255.

#include<stdio.h>
#include<stdlib.h>

void DisplayASCII()
{
    int iCnt=0;

    printf("\n");
    printf("---------------------------------------------------------\n");
    printf("----------------------| ASCII Table |----------------------\n");
    printf("---------------------------------------------------------\n\n");

    for(iCnt=0;iCnt<=255;iCnt++)
    {
        printf("| %d\t | %x\t | %o\t | %c\t |\n",iCnt,iCnt,iCnt,iCnt);
    }
    printf("\n");
    printf("---------------------------------------------------------\n");
}

int main()
{
    DisplayASCII();

    return 0;
}
