//Problem Statement : write a program to find difference between even factors and odd factorial of given number
//input: 5
//output: 15(5*3*1)

////////////////////////////////////////////////////////////////
//
// Function Name  :     FactorialDiff
// Description :        It is used to find difference between even factors and odd factorial of given number
// Input arguments :    Integer
// Output :             Integer
// Author :             Vibhuti Raosaheb Gudaghe
// Date :               15/10/2023 
//
////////////////////////////////////////////////////////////////
#include<stdio.h>

int FactorialDiff(int iNo)
{
    if(iNo<0)
    {
        iNo=-iNo;
    }
    int iCnt=0;
    int ieven=1;
    int iodd=1;
    int idiff=0;
    for(iCnt=iNo;iCnt>=1;iCnt--)
    {
        if(iCnt%2==0)
        {
            ieven=ieven*iCnt;
        }
        else if(iCnt%2!=0)
        {
            iodd=iodd*iCnt;
        }
    }
    idiff=ieven-iodd;
    return idiff;
}
int main()
{
    int iValue=0;
    int iRet=0;
    printf("Enter the number :");
    scanf("%d",&iValue);

    iRet=FactorialDiff(iValue);

    printf("Even Factorial is : %d",iRet);

    return 0;
}