//Problem Statement : write a program to accept number from user and find factorial of given number
//input: 5
//output: Five

////////////////////////////////////////////////////////////////
//
// Function Name  :     Factorial
// Description :        It is used to accept number from user and find factorial of given number
// Input arguments :    Integer
// Output :             Integer
// Author :             Vibhuti Raosaheb Gudaghe
// Date :               15/10/2023 
//
////////////////////////////////////////////////////////////////
#include<stdio.h>

int Factorial(int iNo)
{
    int iSum=1;
    int iCnt=1;
    for(iCnt=1; iCnt<=(iNo); iCnt++)
    {
        iSum=iSum*iCnt;
    }
    
    return iSum;
}
int main()
{
    int iValue=0;
    int iRet=0;
    printf("Enter the number :");
    scanf("%d",&iValue);

    iRet=Factorial(iValue);

    printf("Factorial is : %d",iRet);

    return 0;
}