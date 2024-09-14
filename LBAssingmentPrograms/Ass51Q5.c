// 5. Write a recursive program which display below pattern.
// a b c d e f   // 5

#include<stdio.h>

void Display(int iNo)
{
    static char ch ='a';

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