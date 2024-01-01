#include<iostream>
using namespace std;

template <class T>
T SearchLast(T *Arr, int size,int iNo)
{
    int i=0;
    int LastOcc=-1;
    for(i=size-1;i>=0;i--)
    {
        if(Arr[i]==iNo)
        {
            LastOcc=i;
            break;
        }
    }
    return LastOcc;
}
int main()
{
    int Arr[]={10,20,30,10,30,40,10,40,10};
    int iRet=SearchLast(Arr,9,40);
    cout<<" "<<iRet;
    return 0;
}