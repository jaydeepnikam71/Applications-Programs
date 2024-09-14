//5.Accept number of rows and number of columns from user and display below pattern.
// 1 1 1 1 
// 2 2 2 2  
// 3 3 3 3 
// 4 4 4 4 

#include<stdio.h>

void Pattern(int iRow ,int iCol)
{
    int iCnt=0;
    int jCnt=0;

    /*for(iCnt=1;iCnt<=iRow;iCnt++)
    {
        for(jCnt=1;jCnt<=iCol;jCnt++)
        {
            if(iCnt==1)
            {
                printf("1\t");
            }
            
            if(iCnt==2)
            {
                printf("2\t");
            }
            if(iCnt==3)
            {
                printf("3\t");
            }
            if(iCnt==4)
            {
                printf("4\t");
            }
        }
        printf("\n");
    }*/
    int iCount=1;

    for(iCnt=1;iCnt<=iRow;iCnt++)
    {
        for(jCnt=1;jCnt<=iCol;jCnt++)
        {
            printf("%d\t",iCount);
        }
        printf("\n");
        iCount++;
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