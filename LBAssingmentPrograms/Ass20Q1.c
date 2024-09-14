//1.Accept number of rows and number of columns from user and display below pattern.
// 1 2 3 4
// 5 6 7 8
// 9 1 2 3
// 4 5 6 7

#include<stdio.h>

void Pattern(int iRows, int iCol)
{
    int iCnt=0;
    int jCnt=0;
    int iNo1=0;
    int iNo2=0;

    for(iCnt=1;iCnt<=iRows;iCnt++)
    {
        for(jCnt=1;jCnt<=iCol;jCnt++)
        {
            if(iCnt==1 || iCnt==2)
            {
                iNo1++;
                printf("%d\t",iNo1);
            }
            else if(iCnt==3 && jCnt==1)
            {
                printf("9\t");
            }
            else
            {
                iNo2++;
                printf("%d\t",iNo2);
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