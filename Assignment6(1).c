//Problem Statement : write a program to accept number from user and display $ and * 
//input: 5
//output: $*$*$*$*$*

////////////////////////////////////////////////////////////////
//
// Function Name  :     Pattern
// Description :        It is used to accept number from user and display $ and * 
// Input arguments :    Integer
// Output :            * Pattern
// Author :             Vibhuti Raosaheb Gudaghe
// Date :               15/10/2023 
//
////////////////////////////////////////////////////////////////
#include<stdio.h>
void Pattern(int iNo)
{
    int iCnt=0;
    for(iCnt=1;iCnt<iNo;iNo++)
    {
        printf("$*");
    }
}
int main()
{
    int iValue=0;
    printf("Enter the number :");
    scanf("%d",&iValue);

    Pattern(iValue);
    return 0;
}
