//Problem Statement : write a program which Accept number from user and print "*#" on screen
//input: 5
//output: * * * * * # # # # #

////////////////////////////////////////////////////////////////
//
// Function Name  :     Display
// Description :        It is used to Accept one number from user and print "*" on screen
// Input arguments :    Integer
// Output :             * pattern
// Author :             Vibhuti Raosaheb Gudaghe
// Date :               15/10/2023 
//
////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iNo)
{
    if(iNo<0)
    {
        iNo=-iNo;
    }
    int iCnt=1;
    for(iCnt=1; iCnt<=iNo; iCnt++)
    {
        printf("*\t",iCnt);
        
    }
    for(iCnt=1; iCnt<=iNo; iCnt++)
    {
        
        printf("#\t",iCnt);
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