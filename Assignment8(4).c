//Problem Statement : write a program to find odd factorial of given number
//input: 5
//output: 15(5*3*1)

////////////////////////////////////////////////////////////////
//
// Function Name  :     OddFactorial
// Description :        It is used to find odd factorial of given number
// Input arguments :    Integer
// Output :             Integer
// Author :             Vibhuti Raosaheb Gudaghe
// Date :               15/10/2023 
//
////////////////////////////////////////////////////////////////
#include<stdio.h>

int OddFactorial(int iNo)
{
    if(iNo<0)
    {
        iNo=-iNo;
    }
    int iCnt=0;
    int iSum=1;
    for(iCnt=iNo;iCnt>=1;iCnt--)
    {
        if(iCnt%2!=0)
        {
            iSum=iSum*iCnt;
        }
        
    }
    return iSum;
}
int main()
{
    int iValue=0;
    int iRet=0;
    printf("Enter the number :");
    scanf("%d",&iValue);

    iRet=OddFactorial(iValue);

    printf("Even Factorial is : %d",iRet);

    return 0;
}