//5.Accept number of rows and number of columns from user and display below pattern.
// 1 2 3 4 
// 2 3 4 5 
// 3 4 5 6 
// 4 5 6 7

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
            if(iCnt ==1)
            {
                printf("%d\t",iNo);
            }
            else if(iCnt==2)
            {
                printf("%d\t",iNo+1);
            }
            else if(iCnt==3)
            {
                printf("%d\t",iNo+2);
            }
            else
            {
                printf("%d\t",iNo+3);
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