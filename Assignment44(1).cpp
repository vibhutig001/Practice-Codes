#include<iostream>
using namespace std;

template <class T>
T Multiply(T No1,T No2)
{
    T ans=0;
    ans=No1*No2;
    return ans;
}
int main()
{
    
    int iRet=Multiply(10,20);
    cout<<" "<<iRet;

    float fRet=Multiply(10.0f,20.0f);
    cout<<" "<<fRet;


    return 0;
}