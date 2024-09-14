// 2. Write a program which accept width & height from user and calculate its area.( Consider Area=Width * Height)

#include<stdio.h>

double RectArea(float fWidth,float fHeight)
{
    float fAns=0.0;
    fAns= fWidth * fHeight;
    return fAns;
}


int main()
{
    float fValue1=0.0;
    float fValue2=0.0;
    double dRet=0.0;

    printf("Enter width : ");
    scanf("%f",&fValue1);
    
    printf("Enter Height : ");
    scanf("%f",&fValue2);

    dRet=RectArea(fValue1,fValue2);

    printf("Area of Rectangle is : %f",dRet);

    return 0;
}