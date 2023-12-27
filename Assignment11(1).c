//Problem Statement : write a program to Accept number from user and Display digit in reverse order
//input: 2395
//output: 5932

////////////////////////////////////////////////////////////////
//
// Function Name  :     DisplayDigit
// Description :        It is used to Accept number from user and Display digit in reverse order
// Input arguments :    Integer
// Output :             Integer
// Author :             Vibhuti Raosaheb Gudaghe
// Date :               26/10/2023 
//
////////////////////////////////////////////////////////////////
#include<stdio.h>
void DisplayDigit(int iNo)
{
    int iDigit=0;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    while(iNo!=0)
    {
        iDigit=iNo%10;
        printf("%d\n",iDigit);
        iNo=iNo/10;
    }
}

int main()
{
    int iVlaue=0;
    printf("Enetr number:");
    scanf("%d",&iVlaue);

    DisplayDigit(iVlaue);

    return 0;
}