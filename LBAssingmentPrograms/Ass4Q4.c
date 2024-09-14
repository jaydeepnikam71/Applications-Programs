// 4. Write a program which accept number from user and returns summation of all its non factors.

#include<stdio.h>

int SumNonFact(int iNo)
{
    if(iNo<0)
    {
        iNo=-iNo;
    }

    int i=0;
    int j=0;

    for(i=1;i<iNo;i++)
    {
        if((iNo % i)>=1)
        {
            j=j+i;
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

    iRet=SumNonFact(iValue);

    printf("%d",iRet);

    return 0;

}