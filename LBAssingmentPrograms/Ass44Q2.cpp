// 2. Write a generic program to find largest number from three numbers.

#include<stdio.h>

template <class T>

T Maximum(T no1 ,T no2, T no3)
{
    if(no1 > no2 && no1 >no3)
    {
        printf("no1 is maximum\n");
    }
    else if(no2 > no1 && no2 >no3)
    {
        printf("no2 is maximum\n");
    }
    else
    {
        printf("no3 is maximum\n");
    }
} 

int main()
{
    Maximum(10, 20, 45);
    Maximum(10.0f,40.0f,34.0f);
    Maximum(10.0006,40.8346,21.76453);

    return 0;
}
