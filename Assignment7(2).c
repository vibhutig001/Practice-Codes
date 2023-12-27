//Problem Statement : write a program to accept number from user and print it into word
//input: 5
//output: Five

////////////////////////////////////////////////////////////////
//
// Function Name  :     Display
// Description :        It is used to to accept number from user and print it into word
// Input arguments :    Integer
// Output :             Integer
// Author :             Vibhuti Raosaheb Gudaghe
// Date :               15/10/2023 
//
////////////////////////////////////////////////////////////////
#include <stdio.h>

void Display(int iNo) {
   switch(iNo)
    {
        
        case 1:
            printf("One\n");
            break;
        case 2:
            printf("Two\n");
            break;
        case 3:
            printf("Three\n");
            break;
        case 4:
            printf("Four\n");
            break;
        case 5:
            printf("Five\n");
            break;
        case 6:
            printf("Six\n");
            break;
        case 7:
            printf("Seven\n");
            break;
        case 8:
            printf("Eight\n");
            break;
        case 9:
            printf("Nine\n");
            break;
        default:
            printf("Wrong Input\n");
        
    }
 
}

int main() {
    int iValue = 0;
    
    printf("Enter the value: ");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}
