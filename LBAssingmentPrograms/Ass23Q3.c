//3.Accept number of rows and number of columns from user and display below pattern.
// * * * * * * 
// *       * *
// *     *   *
// *   *     *
// * *       *
// * * * * * *

#include<stdio.h>

void Pattern(int iRows, int iCol)
{
    int iCnt=0;
    int jCnt=0;

    for(iCnt=1;iCnt<=iRows;iCnt++)
    {
        for(jCnt=1;jCnt<=iCol;jCnt++)
        {
            if(iCnt+jCnt==7)
            {
                printf("*\t");
            }
            else if(iCnt==1 || iCnt==6 || jCnt==1 || jCnt==6)
            {
                printf("*\t");
            }
            else
            {
                printf("\t");
            }
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