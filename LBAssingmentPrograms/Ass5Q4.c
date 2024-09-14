// 4. Write a program which accept three numbers from user and print its multiplication.

#include<stdio.h>

int Multiply(int iNo1, int iNo2, int iNo3)
{

    int iAns=0;

    iAns=iNo1*iNo2*iNo3;

    return iAns;
}

int main()
{
    int iValue1=0;
    int iValue2=0;
    int iValue3=0;
    int iRet=0;
   
    printf("Please enter three numbers : \n");
    scanf("%d %d %d",&iValue1,&iValue2,&iValue3);
    
    iRet=Multiply(iValue1,iValue2,iValue3);

    printf("Multiplication is : %d\n",iRet);

    return 0;
}   