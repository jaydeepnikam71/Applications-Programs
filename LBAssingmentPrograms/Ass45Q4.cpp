// 4. Write a generic program to accept N values and search last occurence of any specific value.

#include<iostream>
using namespace std;

template <class T>

int LastOcc(T *Arr, int iSize,T no)
{
    int iCnt =0;
    int iCount=0;

    for(iCnt=iSize-1;iCnt>=0;iCnt--)
    {
        if(Arr[iCnt] == no)
        {
            iCount++;
            break;
        }
    }
    return iCnt;
}

int main()
{
    int Arr[]= {10,70,30,10,20,50,10,20,10};

    int iRet = LastOcc(Arr,9,20);
    cout<<iRet<<endl;

    return 0;
}