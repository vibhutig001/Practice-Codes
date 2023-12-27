#include<stdio.h>

//Problem Statement : Accept one number from user and print that number of  "*" on screen


////////////////////////////////////////////////////////////////
//
// Function Name  :     Display
// Description :        It is used to Accept one number from user and print "*" on screen
// Input arguments :    Integer
// Output :             * pattern
// Author :             Vibhuti Raosaheb Gudaghe
// Date :               10/10/2023 
//
////////////////////////////////////////////////////////////////

void Display(int iNo)
{
    
    while(iNo>=1)
    {
        printf("*");
        iNo--;
    }
}
int main()
{
    int iValue=0;
    printf("Enter the number :");
    scanf("%d",&iValue);

    Display(iValue);

    
    return 0;
}