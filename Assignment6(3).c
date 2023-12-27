//Problem Statement : write a program to accept number from user and print its number line
//input: 4
//output: -4 -3 -2 -1 0 1 2 3 4 

////////////////////////////////////////////////////////////////
//
// Function Name  :     Display
// Description :        It is used to accept number from user and print its number line
// Input arguments :    Integer
// Output :             Integer
// Author :             Vibhuti Raosaheb Gudaghe
// Date :               15/10/2023 
//
///////////////////////////////////////////////////////////////
#include <stdio.h>

void Display(int iNo) {
    int iCnt = 0;
    
    for (iCnt = -iNo; iCnt <= iNo; iCnt++) {
        printf("%d\n", iCnt);
    }
}

int main() {
    int iValue = 0;
    
    printf("Enter the value: ");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}
