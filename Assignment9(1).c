//Problem Statement : Write a program which accept radius of circle from user and Calculate its area
//input: 5.3
//output: 88.2026

////////////////////////////////////////////////////////////////
//
// Function Name  :     CircleArea
// Description :        It is used to accept radius of circle from user and Calculate its area
// Input arguments :    float
// Output :             double
// Author :             Vibhuti Raosaheb Gudaghe
// Date :               18/10/2023 
//
////////////////////////////////////////////////////////////////

#include <stdio.h>
#define pi 3.14

double CircleArea(float fRadius)
{
    double fArea = 0.0;
    fArea = pi * (fRadius * fRadius);
    return fArea;
}

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;
    printf("Enter the Radius: ");
    scanf("%f", &fValue);

    dRet = CircleArea(fValue);

    printf("Area of circle is : %lf", dRet);

    return 0;
}
