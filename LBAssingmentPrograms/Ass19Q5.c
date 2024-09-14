//5.Accept number of rows and number of columns from user and display below pattern.
// 1 2 3 4
// 5 6 7 8
// 9 10 11 12

#include<stdio.h>

void Pattern(int iRows, int iCol)
{
    int iCnt=0;
    int jCnt=0;
    int iNo=0;

    for(iCnt=0;iCnt<iRows;iCnt++)
    {
        for(jCnt=0;jCnt<iCol;jCnt++)
        {
            iNo++;
            printf("%d\t",iNo);
        }
        printf("\n");
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