#include<stdio.h>

//Problem Statement : Program to print 5 to 1 on Screen


////////////////////////////////////////////////////////////////
//
// Function Name  :     Display
// Description :        It is used to print 5 to 1 on Screen
// Input arguments :    NA
// Output :             Integer
// Author :             Vibhuti Raosaheb Gudaghe
// Date :               10/10/2023 
//
////////////////////////////////////////////////////////////////


void Display()
{
    int i=0;
    for(i=5;i>=1;i--)
    {
        printf("%d\n",i);
    }
}
int main()
{
    Display();
    return 0;
}