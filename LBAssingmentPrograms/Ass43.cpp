//1.SearchLast()
//2.EvenCount()
//3.OddCount()
//4.SumAll()

#include<iostream>
using namespace std;

class Array
{
    protected :
        int *Arr;
        int size;

    public :
        Array(int value=10)
        {
            cout<<"Inside Constructor\n";

            this->size = value;
            this->Arr = new int[size];
        }
    
        Array(Array &ref)
        {
            cout<<"Inside Copy constructor\n";

            this->size = ref.size;
            this->Arr = new int[this->size];

            for(int i=0;i<size;i++)
            {
                this->Arr[i] = ref.Arr[i];
            }
            
        }

        ~Array()
        {
            cout<<"Inside Destructor\n";
            delete []Arr;
        }

        inline void Accept();
        inline void Display();
};

void Array :: Accept()
{
    cout<<"Please enter the values\n";

    for(int i=0;i<this->size;i++)
    {
        cin>>Arr[i];
    }
}

void Array :: Display()
{
    cout<<"Elements are\n";

    for(int i=0;i<this->size;i++)
    {
        cout<<Arr[i]<<" ";
    }
    cout<<"\n";
}

class ArrSearch : public Array
{
    public : 
        ArrSearch(int no =10) : Array(no)
        {}

        int Frequency(int);
        int SearchFirst(int);
        int SearchLast(int);
        int EvenCount();
        int OddCount();
        int SumAll();
};

int ArrSearch :: SearchFirst(int value)
{
    int i =0;

    for(i=0;i<size;i++)
    {
        if(Arr[i]==value)
        {
            break;
        }
    }
    if(i==size)
    {
        return -1;
    }
    return i+1;
}

int ArrSearch :: Frequency(int value)
{
    int icnt =0;

    for(int i=0;i<size;i++)
    {
        if(Arr[i]==value)
        {
            icnt++;
        }
    }
    return icnt;
} 

int ArrSearch :: SearchLast(int value)
{
    int i=0;

    for(i=size-1;i>=0;i--)
    {
        if(Arr[i]==value)
        {
            break;
        }
    }
    if(i==0)
    {
        return -1;
    }
    return i+1;
}

int ArrSearch :: EvenCount()
{
    int icnt=0;

    for(int i=0;i<size;i++)
    {
        if(Arr[i] % 2 == 0)
        {
            icnt++;
        }
    }
    return icnt;
}

int ArrSearch :: OddCount()
{
    int icnt=0;

    for(int i=0;i<size;i++)
    {
        if(Arr[i] % 2 != 0)
        {
            icnt++;
        }
    }
    return icnt;
}

int ArrSearch :: SumAll()
{
    int iSum=0;

    for(int i=0;i<size;i++)
    {
        iSum = iSum + Arr[i];
    }
    return iSum;
}

int main()
{
    int iret = 0;
    cout<<"Inside main\n";

    ArrSearch sobj1(5);
    sobj1.Accept();
    sobj1.Display();

    iret = sobj1.Frequency(11);

    cout<<"Frequency is : "<<iret<<"\n";

    iret = sobj1.SearchFirst(11);

    cout<<"First Occurence is : "<<iret<<"\n";

    iret = sobj1.SearchLast(11);

    cout<<"Last Occurence is : "<<iret<<"\n";

    iret = sobj1.EvenCount();

    cout<<"Even is : "<<iret<<"\n";

    iret = sobj1.OddCount();

    cout<<"odd is : "<<iret<<"\n";

    iret = sobj1.SumAll();

    cout<<"Sum of all is : "<<iret<<"\n";

    return 0;
}
