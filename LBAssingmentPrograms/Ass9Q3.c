// 3. Write a program which accept distance in kilometer and convert it into meter.(1 kilometer =1000 Meter)

#include<stdio.h>
# define KM 1000

int KMtoMeter(int iNo)
{
    int iAns=0;
    iAns=iNo * KM;
    return iAns;
}


int main()
{
    int iValue=0;
    int iRet=0;


    printf("Enter distance : ");
    scanf("%d",&iValue);

    iRet=KMtoMeter(iValue);

    printf("Distance in meter : %d",iRet);

    return 0;
}