//1.Accept number of rows and number of columns from user and display below pattern.
// A B C D
// A B C D
// A B C D
// A B C D

#include<stdio.h>

void Pattern(int iRows,  int iCol)
{
    int iCnt=0;
    int jCnt=0;

    /*for(iCnt=0;iCnt<iRows;iCnt++)
    {
        for(jCnt=0;jCnt<iCol;jCnt++)
        {
            if(jCnt=1)
            {
                printf("A\t");
            }
            if(jCnt=2)
            {
                printf("B\t");
            }
            if(jCnt=3)
            {
                printf("C\t");
            }
            if(jCnt=4)
            {
                printf("D\t");
            }
        }
        printf("\n");
    }*/

    char ch = 'A';

    for(iCnt=0;iCnt<iRows;iCnt++)
    {
        for(jCnt=0;jCnt<iCol;jCnt++)
        {
            printf("%c\t",ch);
            ch++;
        }
        printf("\n");
        ch = 'A';
    }
}

int main()
{   
    int iValue1=0,iValue2=0;

    printf("Enter the number of rows and columns : \n");
    scanf("%d %d",&iValue1,&iValue2);

    Pattern(iValue1,iValue2);

    return 0;
}