//Problem Statement : write a program to which accept number from user and if number is less than 50 then print small if it is greater than 50
//and less than 100 then print medium if it is greater then 100 then print large
//input: 75
//output: medium

////////////////////////////////////////////////////////////////
//
// Function Name  :     Number
// Description :        It is used to which accept number from user and if number is less than 50 then print small if it is greater than 50
//                      and less than 100 then print medium if it is greater then 100 then print large
// Input arguments :    Integer
// Output :             Integer
// Author :             Vibhuti Raosaheb Gudaghe
// Date :               15/10/2023 
//
////////////////////////////////////////////////////////////////
#include <stdio.h>

void Number(int iNo) 
{
    if(iNo<=50)
    {
        printf("Smaller");
    }
    else if(iNo>=50 && iNo<=100)
    {
        printf("Medium");
    }
    else if(iNo>100)
    {
        printf("Large");
    }
}

int main() {
    int iValue = 0;
    
    printf("Enter the value: ");
    scanf("%d", &iValue);

    Number(iValue);

    return 0;
}
