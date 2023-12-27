//Problem Statement : Write a program which accept width and height of rectangle from user and Calculate its area
//input: 5.3 9.78
//output: 51.834

////////////////////////////////////////////////////////////////
//
// Function Name  :     RectArea
// Description :        It is used to accept width and height of rectangle from user and Calculate its area
// Input arguments :    float float
// Output :             double
// Author :             Vibhuti Raosaheb Gudaghe
// Date :               18/10/2023 
//
////////////////////////////////////////////////////////////////

#include <stdio.h>

double RectArea(float fwidth,float fHeight)
{
    double fArea = 0.0;
    fArea = (fwidth * fHeight);
    return fArea;
}

int main()
{
    float fValue1 = 0.0f,fValue2 = 0.0f;
    double dRet = 0.0;

    printf("Enter the Width: ");
    scanf("%f", &fValue1);
    printf("Enter the Height: ");
    scanf("%f", &fValue2);

    dRet = RectArea(fValue1,fValue2);

    printf("Area of circle is : %lf", dRet);

    return 0;
}
