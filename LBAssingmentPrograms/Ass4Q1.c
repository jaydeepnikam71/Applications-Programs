// 1.Write a program which accept one number from user and display its multiplication of factors.

#include<stdio.h>

int MultFact(int iNo)
{
    if(iNo<0)
    {
        iNo=-iNo;  
    }
    int i=0;
    int j=1;

    for(i=1;i<iNo;i++)
    {
        if((iNo % i)==0)
        {
            j=j*i;
        }
    }
    return j;
}

int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet=MultFact(iValue);

    printf("%d",iRet);

    return 0;

}