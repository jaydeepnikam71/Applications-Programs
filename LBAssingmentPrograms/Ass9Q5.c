// 5. Write a program which accept area in square feet and convert it into square meter.(1 square feet = 0.0929 Square meter)

#include<stdio.h>
# define SM 0.0929

double SquareMeter(int iNo)
{
   double dAns=0.0;
   dAns=iNo * SM;
   return dAns;
}

int main()
{
    int iValue =0;
    double dRet=0.0;

    printf("Enter area in sqaure feet: ");
    scanf("%d",&iValue);

    dRet=SquareMeter(iValue);

    printf("Area in square meter : %f",dRet);

    return 0;
}
