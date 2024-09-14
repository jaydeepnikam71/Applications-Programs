// 3. Write a generic program to accept N values from user and return addition of that values.

#include<iostream>
using namespace std;

template <class T>

T AddN(T *arr, int iSize)
{
    int iCnt =0;
    T Ans=0;
    
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        Ans = arr[iCnt] + Ans;
    }
    return Ans;
}

int main()
{
    int Arr[]= {10,20,30,50,60};
    float Brr[] = {10.0,20.0,30.0,40.0,50.0};

    int iRet = AddN(Arr,5);
    cout<<iRet<<endl;

    float fRet = AddN(Brr,5);
    cout<<fRet<<endl;

    return 0;
}
