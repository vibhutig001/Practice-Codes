//Problem Statement : Write a program which accept range from user and Return Addition all numbers in between that range
//input: 23 35
//output: 212

////////////////////////////////////////////////////////////////
//
// Function Name  :     RangeSum
// Description :        It is used to accept range from user and Return Addition all numbers in between that range
// Input arguments :    Integer,Integer
// Output :             Integer
// Author :             Vibhuti Raosaheb Gudaghe
// Date :               18/10/2023 
//
////////////////////////////////////////////////////////////////
#include<stdio.h>
void RangeSum(int iStart , int iEnd)
{
    int iCnt=0;
    int iSum=0;
    if(iStart>iEnd || iStart<0 || iEnd<0)
    {
        printf("Invalid Values");
    }
    else
    {
        for(iCnt=iStart;iCnt<=iEnd;iCnt++)
        {
            iSum=iSum+iCnt;
            
        }
        printf("%d\n",iSum) ; 
    }
     
}
int main()
{
    int iValue1=0;
    int iValue2=0;
    printf("Enter First Value:");
    scanf("%d",&iValue1);
    printf("Enter Second Value:");
    scanf("%d",&iValue2);

    RangeSum(iValue1,iValue2);
    return 0;
}