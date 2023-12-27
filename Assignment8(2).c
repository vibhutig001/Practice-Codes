//Problem Statement : write a program which Accept amount in US doller and returm its corresponding value in Indian Currency(1$=70 rupee)
//input: 3
//output: 270

////////////////////////////////////////////////////////////////
//
// Function Name  :     DollerToINR
// Description :        It is used to Accept amount in US doller and returm its corresponding value in Indian Currency
// Input arguments :    Integer
// Output :             Integer
// Author :             Vibhuti Raosaheb Gudaghe
// Date :               15/10/2023 
//
////////////////////////////////////////////////////////////////
#include<stdio.h>

int DollerToINR(int iNo)
{
    int inr=0;
    inr=iNo*70;
    return inr;
    
}
int main()
{
    int iValue=0;
    int iRet=0;
    printf("Enter the number :");
    scanf("%d",&iValue);

    iRet=DollerToINR(iValue);

    printf("Factorial is : %d",iRet);

    return 0;
}