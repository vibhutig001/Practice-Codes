#include<iostream>
using namespace std;

template <class T>
T Max(T No1,T No2,T No3)
{
    if(No1>=No2 && No1>=No3)
    {
        return No1;
    }
    else if(No2>=No1 && No2>=No3)
    {
        return No2;
    }
    
    return No3;
}
int main()
{
    int iRet =Max(10,93,78);
    cout<<"Max is : "<<iRet;

    float fRet =Max(25.6f,3.54f,78.2f);
    cout<<"Max is : "<<fRet;



    return 0;
}