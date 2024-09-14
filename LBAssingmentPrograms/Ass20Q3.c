//3.Accept number of rows and number of columns from user and display below pattern.
// a b c d e
// 1 2 3 4 5
// a b c d e
// 1 2 3 4 5 
// a b c d e

#include<stdio.h>

void Pattern(int iRows, int iCol)
{
    int iCnt=0;
    int jCnt=0;
    char ch = 'a';
    int iCount=1;

    for(iCnt=1;iCnt<=iRows;iCnt++)
    {
        for(jCnt=1;jCnt<=iCol;jCnt++)
        {
           if(iCnt==1 || iCnt==3 || iCnt==5)
           {
                printf("%c\t",ch);
           }
           else
           {
                printf("%d\t",iCount);
           }
           ch++;
           iCount++;
        }
        printf("\n");
        ch='a';
        iCount=1;
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