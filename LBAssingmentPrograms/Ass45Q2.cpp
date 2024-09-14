// 2. Write a generic program to accept N values and count frequency of any specific value.

#include<iostream>
using namespace std;

template <class T>

int Frequency(T *Arr, int iSize,T no)
{
    int iCnt =0;
    int iCount=0;

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if(Arr[iCnt] == no)
        {
            iCount++;
        }
    }
    return iCount;
}


int main()
{
    int Arr[]= {10,20,30,10,20,50,10,60,10};

    int iRet = Frequency(Arr,9,10);
    cout<<iRet<<endl;

    return 0;
}
