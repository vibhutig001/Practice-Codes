//Problem Statement : Write a program which accept area in square feet and convert it into square meter(1 sq feet=0.0929sq meter)
//input: 10
//output: -12.2222 (10-32)*(5/9)

////////////////////////////////////////////////////////////////
//
// Function Name  :     SquareMeter
// Description :        It is used to accept area in square feet and convert it into square meter
// Input arguments :    float 
// Output :             double
// Author :             Vibhuti Raosaheb Gudaghe
// Date :               18/10/2023 
//
////////////////////////////////////////////////////////////////
#include<stdio.h>

double SquareMeter(float fValue)
{
    double iAns=0.0;
    iAns=fValue*0.0929;
    return iAns;
}
int main()
{
    float fValue=0.0f;
    double dRet=0.0;
    printf("Enter the Distance :");
    scanf("%f",&fValue);

    dRet=SquareMeter(fValue);

    printf("Distance from KM to M is : %lf",dRet);

    return 0;
}