//4.Accept number of rows and number of columns from user and display below pattern.
// * # * #
// * # * #
// * # * #

#include<stdio.h>

void Pattern(int iRow ,int iCol)
{
    int iCnt=0;
    int jCnt=0;

    for(iCnt=1;iCnt<=iRow;iCnt++)
    {
        for(jCnt=1;jCnt<=iCol;jCnt++)
        {
            if((jCnt==1) || (jCnt==3))
            {
                printf("*\t");
            }
            if((jCnt==2) || (jCnt==4))
            {
                printf("#\t");
            }
        }
        printf("\n");
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