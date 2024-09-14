// 1. Write a program which accept radius of circle from user and calculate its area.
//Consider value of PI as 3.14. (Area =PI * Radius * Radius)

#include<stdio.h>
# define PI 3.14

double CircleArea(float fRadius)
{
    float fAns=0.0;
    fAns= PI * fRadius * fRadius;
    return fAns;
}


int main()
{
    float fValue=0.0;
    double dRet=0.0;

    printf("Enter Radius : ");
    scanf("%f",&fValue);

    dRet=CircleArea(fValue);

    printf("Area of circle is : %f",dRet);

    return 0;
}