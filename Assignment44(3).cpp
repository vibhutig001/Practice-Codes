#include<iostream>
using namespace std;

template <class T>
T AddN(T *Arr,int size)
{
    T Sum=0;
    int i=0;
    for(i=0;i<size;i++)
    {
        Sum=Sum+Arr[i];
    }
    return Sum;
}
int main()
{
    int Arr[]={10,20,30,40,50};
    float Brr[]={10.3,3.7,9.8,8.7};

    int iSum=AddN(Arr,5);
    cout<<" "<<iSum<<"\n";

    float fSum=AddN(Brr,4);
    cout<<" "<<fSum;
    return 0;
}