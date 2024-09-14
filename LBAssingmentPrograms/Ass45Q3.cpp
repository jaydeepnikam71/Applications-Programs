// 3. Write a generic program to accept N values and search first occurence of any specific value.

#include<iostream>
using namespace std;

template <class T>

int FirstOcc(T *Arr, int iSize,T no)
{
    int iCnt =0;
    int iCount=0;

    for(iCnt=0;iCnt<=iSize;iCnt++)
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

    int iRet = FirstOcc(Arr,9,30);
    cout<<iRet<<endl;

    return 0;
}