#include<iostream>
using namespace std;

template <class T>
T MaxN(T *Arr,int size)
{
    T Sum=0;
    int i=0;
    int Max=Arr[0];
    for(i=0;i<size;i++)
    {
        if(Max<=Arr[i])
        {
            Max=Arr[i];
        }
    }
    return Max;
}
int main()
{
    int Arr[]={10,20,30,40,50};
    float Brr[]={10.3,3.7,9.8,8.7};

    int iSum=MaxN(Arr,5);
    cout<<" "<<iSum<<"\n";

    float fSum=MaxN(Brr,4);
    cout<<" "<<fSum;
    return 0;
}