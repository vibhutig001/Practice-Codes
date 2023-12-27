
#include<stdio.h>
//Problem Statement : Program to divide two number


////////////////////////////////////////////////////////////////
//
// Function Name  :     Divide
// Description :        It is used to to divide two number
// Input arguments :    Integer,Integer
// Output :             Integer
// Author :             Vibhuti Raosaheb Gudaghe
// Date :               10/10/2023 
//
////////////////////////////////////////////////////////////////
int Divide(int iNo1,int iNo2)
{
    int iAns=0;
    if(iNo2/iNo1)
    {
        return -1;
    }
    iAns=iNo1/iNo2;
    return iAns;
}

int main()
{
    int iValue1=5;
    int iValue2=15;
    int iRet=0;

    iRet=Divide(iValue1,iValue2);

    printf("Division is %d: ",iRet);

    return 0;
}