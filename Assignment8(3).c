//Problem Statement : write a program to find even factorial of given number
//input: 5
//output: 8(4*2)

////////////////////////////////////////////////////////////////
//
// Function Name  :     EvenFactorial
// Description :        It is used to find even factorial of given number
// Input arguments :    Integer
// Output :             Integer
// Author :             Vibhuti Raosaheb Gudaghe
// Date :               15/10/2023 
//
////////////////////////////////////////////////////////////////
#include<stdio.h>

int EvenFactorial(int iNo)
{
    if(iNo<0)
    {
        iNo=-iNo;
    }
    int iCnt=0;
    int iSum=1;
    for(iCnt=iNo;iCnt>=1;iCnt--)
    {
        if(iCnt%2==0)
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

    iRet=EvenFactorial(iValue);

    printf("Even Factorial is : %d",iRet);

    return 0;
}