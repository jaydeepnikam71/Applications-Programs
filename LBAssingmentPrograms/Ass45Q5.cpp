// 5. Write a generic program to accept N values and reverse the contents.

#include<iostream>
using namespace std;

template <class T>

void Reverse(T *Arr, int iSize)
{
    int iCnt =0;
    int jCnt=iSize-1;
    T temp =0;

    while(iCnt<=jCnt)
    {
        temp = Arr[iCnt];
        Arr[iCnt] = Arr[jCnt];
        Arr[jCnt]  = temp;

        iCnt++;
        jCnt--;
    }
}

int main()
{
    int Arr[]= {10,70,30,10,20,50,10,20,10};
    
    int iCnt=0;
    for(iCnt=0;iCnt<9;iCnt++)
    {
        cout<<Arr[iCnt]<<"\t";
    }
    cout<<"\n";

    Reverse(Arr,9);
    for(iCnt=0;iCnt<9;iCnt++)
    {
        cout<<Arr[iCnt]<<"\t";
    }

    return 0;
}