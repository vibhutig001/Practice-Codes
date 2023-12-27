//Problem Statement : write a program to accept N from user and print its odd numbers up to N
//input: 18
//output: 1 3 5 7 9 11 13

////////////////////////////////////////////////////////////////
//
// Function Name  :     OddDisplay
// Description :        It is used to accept N from user and print its odd numbers up to N
// Input arguments :    Integer
// Output :             Integer
// Author :             Vibhuti Raosaheb Gudaghe
// Date :               15/10/2023 
//
///////////////////////////////////////////////////////////////
#include <stdio.h>

void OddDisplay(int iNo) {
    int iCnt = 0;
    
    for (iCnt = 1; iCnt <= iNo; iCnt++) {
        if(iCnt%2!=0)
        {
            printf("%d\n",iCnt);
        }
    }
}

int main() {
    int iValue = 0;
    
    printf("Enter the value: ");
    scanf("%d", &iValue);

    OddDisplay(iValue);

    return 0;
}
