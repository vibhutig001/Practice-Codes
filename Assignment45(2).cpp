#include<iostream>
using namespace std;

template <class T>
T Frequency(T *Arr, int size,int iNo)
{
    int i=0;
    int Sum=0;
    for(i=0;i<=size;i++)
    {
        if(Arr[i]==iNo)
        {
            Sum++;
        }
    }
    return Sum;
}
int main()
{
    int Arr[]={10,20,30,10,30,40,10,40,10};
    int iRet=Frequency(Arr,9,10);
    cout<<" "<<iRet;
    return 0;
}