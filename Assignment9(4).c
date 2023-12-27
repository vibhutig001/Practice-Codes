//Problem Statement : Write a program which accept Temperature in Fahrenheit and convert it into celsius(1 celcius= (Fahrenheit-32)*(5/9))
//input: 10
//output: -12.2222 (10-32)*(5/9)

////////////////////////////////////////////////////////////////
//
// Function Name  :     FhtoCs
// Description :        It is used to accept Temperature in Fahrenheit and convert it into celsius
// Input arguments :    float 
// Output :             double
// Author :             Vibhuti Raosaheb Gudaghe
// Date :               18/10/2023 
//
////////////////////////////////////////////////////////////////
#include<stdio.h>

double FhtoCs(float fTemp)
{
    double fAns;
    fAns=(fTemp-32)*(5.0/9.0);
    return fAns;
}
int main()
{
    float fValue=0.0f;
    double dRet=0;
    printf("Enter Temperature in Fahrenheit :");
    scanf("%f",&fValue);

    dRet=FhtoCs(fValue);

    printf("Temperature in Fahrenheit to Celsius is : %lf",dRet);

    return 0;
}