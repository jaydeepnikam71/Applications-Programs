//2.Accept number of rows and number of columns from user and display below pattern.
// 2 6 7 8 10
// 1 3 5 7 9
// 2 4 6 8 10
// 1 3 5 7 9

#include<stdio.h>

void Pattern(int iRows, int iCol)
{
    int iCnt=0;
    int jCnt=0;


    for(iCnt=1;iCnt<=iRows;iCnt++)
    {
        for(jCnt=1;jCnt<=iCol;jCnt++)
        {
            if(iCnt % 2 == 0)
            {
                printf("%d ", 2 * jCnt -1);
            }
            
            else if(iCnt % 2 != 0) 
            {
                printf("%d ", 2 * jCnt);
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