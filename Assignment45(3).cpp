#include<iostream>
using namespace std;

template <class T>
T SearchFirst(T *Arr, int size,int iNo)
{
    int i=0;
    int FirstOcc=-1;
    for(i=0;i<=size;i++)
    {
        if(Arr[i]==iNo)
        {
            FirstOcc=i;
            break;
        }
    }
    return FirstOcc;
}
int main()
{
    int Arr[]={10,20,30,10,30,40,10,40,10};
    int iRet=SearchFirst(Arr,9,40);
    cout<<" "<<iRet;
    return 0;
}