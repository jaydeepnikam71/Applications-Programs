// 4. Write a recursive program which display below pattern.
// A B C D E F   // 5

#include<stdio.h>

void Display(int iNo)
{
    static char ch ='A';

    if(iNo!=0)
    {
        printf("%c\t",ch);
        ch++;
        iNo--;
        Display(iNo);
    }
}

int main()
{
    int iValue =0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}