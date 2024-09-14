//3.Accept number of rows and number of columns from user and display below pattern.
// A A A A A
// B B B B B
// C C C C C

#include<stdio.h>

void Pattern(int iRows, int iCol)
{
    int iCnt=0;
    int jCnt=0;
    char ch='A';

    for(iCnt=0;iCnt<iRows;iCnt++)
    {
        for(jCnt=0;jCnt<iCol;jCnt++)
        {
            printf("%c\t",ch);
        }
        printf("\n");
        ch++;
    }
}

int main()
{   
    int iValue1=0,iValue2=0;

    printf("Enter the number of rows and columns :\n");
    scanf("%d %d",&iValue1,&iValue2);

    Pattern(iValue1,iValue2);

    return 0;
}