//2.Accept number of rows and number of columns from user and display below pattern.
// A B C D
// a b c d
// A B C D
// a b c d

#include<stdio.h>

void Pattern(int iRows, int iCol)
{
    int iCnt=0;
    int jCnt=0;
    char ch='A';
    char ch1='a';

    for(iCnt=1;iCnt<=iRows;iCnt++)
    {
        for(jCnt=1;jCnt<=iCol;jCnt++)
        {
            if((iCnt==1) || (iCnt==3))
            {
                printf("%c\t",ch);
                ch++;
            }
            else
            {
                printf("%c\t",ch1);
                ch1++;
            }
        }
        printf("\n");
        ch='A';
        ch1='a';
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