// 4. Write a program which accept total marks & obtained marks from user and calculate percentage.

#include<stdio.h>

float Percentage(int iNo1, int iNo2)
{
    float f;
    float fAns=0.0;
    f=iNo2/iNo1;
    fAns=f*100;

    return fAns;
}

int main()
{
    int iValue1=0;
    int iValue2=0;

    float fRet=0.0;
   
    printf("Please enter total marks : ");
    scanf("%d",&iValue1);
    
    printf("Please enter obtained marks : ");
    scanf("%d",&iValue2);
    

    fRet=Percentage(iValue1,iValue2);

    printf("Percentage is : %f ",fRet);

    return 0;
}   