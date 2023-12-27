//Problem Statement : write a program to accept number from user and print numbers till that number
//input: 8
//output: 1 2 3 4 5 6  7 8

////////////////////////////////////////////////////////////////
//
// Function Name  :     Display
// Description :        It is used to accept number from user and print numbers till that number
// Input arguments :    Integer
// Output :             Integer
// Author :             Vibhuti Raosaheb Gudaghe
// Date :               15/10/2023 
//
////////////////////////////////////////////////////////////////
#include <stdio.h>

void Display(int iNo) {
    int iCnt = 0;
    
    for (iCnt = 1; iCnt <= iNo; iCnt++) {
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
