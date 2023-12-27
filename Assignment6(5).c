//Problem Statement : write a program to accept N from user and print first 5 multiple of N
//input: 4
//output: 4 8 12 16 20

////////////////////////////////////////////////////////////////
//
// Function Name  :     MultipleDisplay
// Description :        It is used to accept N from user and print first 5 multiple of N
// Input arguments :    Integer
// Output :             Integer
// Author :             Vibhuti Raosaheb Gudaghe
// Date :               15/10/2023 
//
///////////////////////////////////////////////////////////////
#include <stdio.h>

void MultipleDisplay(int iNo) {
    int iCnt = 0;
    
    for (iCnt = 1; iCnt <= iNo; iCnt++) {
        
            printf("%d\n",iCnt*iNo);
        
    }
}

int main() {
    int iValue = 0;
    
    printf("Enter the value: ");
    scanf("%d", &iValue);

    MultipleDisplay(iValue);

    return 0;
}
