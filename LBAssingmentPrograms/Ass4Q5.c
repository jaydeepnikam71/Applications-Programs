// 5.Write a program which accept number from user and returns difference between summation of all its non factors.


#include<stdio.h>

int FactDiff(int iNo)
{
    if(iNo<0)
    {
        iNo=-iNo;
    }

    int i=0;
    int j=0;
    int k=0;

    for(i=1;i<iNo;i++)
    {
        if((iNo % i)==0)
        {
            j=j+i;
        }
        
        if((iNo % i)>=1)
        {
            k=k+i;
        }
    }
    return j-k;
}

int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet=FactDiff(iValue);

    printf("%d",iRet);

    return 0;

}