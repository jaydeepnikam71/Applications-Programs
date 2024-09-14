//1.Accept number of rows and number of columns from user and display below pattern.
// 1 2 3 4
// 1 * * 4
// 1 * * 4
// 1 2 3 4

#include<stdio.h>

void Pattern(int iRows, int iCol)
{
    int iCnt=0;
    int jCnt=0;
    int iNo=1;

    for(iCnt=1;iCnt<=iRows;iCnt++)
    {
        for(jCnt=1;jCnt<=iCol;jCnt++)
        {
            if(iCnt==4 || iCnt==1)
            {
                printf("%d\t",iNo);
            }
            else if(iCnt==jCnt)
            {
                printf("*\t");
            }
            else if(jCnt==1)
            {
                printf("1\t");
            }
            else if(jCnt==4)
            {
                printf("4\t");
            }
            else
            {
                printf("*\t");
            }
            iNo++;
        }
        printf("\n");
        iNo=1;
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