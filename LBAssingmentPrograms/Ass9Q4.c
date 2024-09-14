// 4. Write a program which accept temperature in Fahrenheit and convert it into celsius.(1 celsius = (Fahrenheit -32) * (5/9))

#include<stdio.h>
#define T 32
#define C 5/9

double FtoCs(float fTemp)
{
    double fCs1 =0.0;
    double fCs2 =0.0;

    fCs1=(fTemp-T);

    fCs2=(fCs1 * C);

    return fCs2;
}

int main()
{
    float fValue=0.0;
    double dRet=0.0;

    printf("Enter temperature in Fahrenheit : ");
    scanf("%f",&fValue);

    dRet=FtoCs(fValue);

    printf("Temperature in Celsius : %f",dRet);

    return 0;
}
