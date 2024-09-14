// 5. Write a generic program to accept N values from user and return smallest values.

#include<iostream>
using namespace std;

template <class T>

T Min(T *Arr, int iSize)
{
    int iCnt =0;
    T Min = Arr[0];

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if(Arr[iCnt] < Min)
        {
            Min = Arr[iCnt];
        }
    }
    return Min;
}


int main()
{
    int Arr[]= {18,20,6,50,60};
    float Brr[] = {67.8,25.6,30.0,43.2,70.5};

    int iRet = Min(Arr,5);
    cout<<iRet<<endl;

    float fRet = Min(Brr,5);
    cout<<fRet<<endl;

    return 0;
}
