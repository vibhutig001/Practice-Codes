#include<stdio.h>

//Problem Statement : Accept two number from user display first number is second number of times 

//Input: 4 5
//output: 4    4    4    4    4


////////////////////////////////////////////////////////////////
//
// Function Name  :     Display
// Description :        It is used to print display first number is second number of times 
// Input arguments :    Integer ,Integer
// Output :             Integer
// Author :             Vibhuti Raosaheb Gudaghe
// Date :               10/10/2023 
//
////////////////////////////////////////////////////////////////

void Display(int iNo,int iFrequency)
{
    int i=0;
    for(i=1;i<=iFrequency;i++)
    {
        printf("%d\t",iNo);
    }
}
int main()
{
    int iValue=0;
    int iCount=0;
    printf("Enter the number :");
    scanf("%d",&iValue);
    printf("Enter the frequency :");
    scanf("%d",&iCount);

    Display(iValue,iCount);

    
    return 0;
}