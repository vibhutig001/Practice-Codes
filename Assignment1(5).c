#include<stdio.h>

//Problem Statement : Accept one number and print "*" on screen


////////////////////////////////////////////////////////////////
//
// Function Name  :     Accept
// Description :        It is used to print "*" on screen
// Input arguments :    Integer
// Output :             * pattern
// Author :             Vibhuti Raosaheb Gudaghe
// Date :               10/10/2023 
//
////////////////////////////////////////////////////////////////

void Accept(int iNo)
{
    int iCnt=0;
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        printf("*");
    }
}
int main()
{
    int iValue=0;
    iValue=5;

    Accept(iValue);

    
    return 0;
}