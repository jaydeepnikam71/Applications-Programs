// 4. Write a generic program to accept N values from user and return largest values.

#include<iostream>
using namespace std;

template <class T>

T Max(T *Arr, int iSize)
{
    int iCnt =0;
    T Max=0;

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if(Arr[iCnt] > Max)
        {
            Max = Arr[iCnt];
        }
    }
    return Max;
}

int main()
{
    int Arr[]= {10,20,80,50,60};
    float Brr[] = {10.0,25.6,30.0,43.2,70.5};

    int iRet = Max(Arr,5);
    cout<<iRet<<endl;

    float fRet = Max(Brr,5);
    cout<<fRet<<endl;

    return 0;
}
