#include<iostream>
using namespace std;

template <class T>
void Reverse(T *Arr, int size)
{
    int start = 0;
    int end = size - 1;

    while (start < end)
    {
        T temp = Arr[start];
        Arr[start] = Arr[end];
        Arr[end] = temp;

        start++;
        end--;
    }
}
int main()
{
    int Arr[]={10,20,30,10,30,40,10,40,10};
    int i=0;
    for(i=0;i<9;i++)
    {
        cout<<Arr[i]<<"\t";
    }

    cout<<"\n";

    Reverse(Arr,9);

    for(i=0;i<9;i++)
    {
        cout<<Arr[i]<<"\t";
    }


    return 0;
}