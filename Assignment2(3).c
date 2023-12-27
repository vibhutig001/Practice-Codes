#include<stdio.h>

//Problem Statement : Accept one number from user if number is less then 10 then print "Hello" otherwise print "Demo"


////////////////////////////////////////////////////////////////
//
// Function Name  :     Display
// Description :        It is used to print if number is less then 10 then print "Hello" otherwise print "D
// Input arguments :    Integer
// Output :             Integer
// Author :             Vibhuti Raosaheb Gudaghe
// Date :               10/10/2023 
//
////////////////////////////////////////////////////////////////

void Display(int iNo)
{
    
    if(iNo<10)
    {
        printf("Hello");
    }
    else{
        printf("Demo");
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