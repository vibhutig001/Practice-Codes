#include<iostream>
using namespace std;

template <class T>
void Display(T value, int size)
{
    int i=0;
    for(i=1;i<=size;i++)
    {
        cout<<"\t"<<value;
    }
}
int main()
{
    Display('M',7);
    cout<<"\n";
    Display(11,3);
    cout<<"\n";
    Display(3.7,6);
    return 0;
}