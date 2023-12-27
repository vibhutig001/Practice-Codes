//Problem Statement : Write a program which accept range from user and Return Addition all EVEN numbers in between that range in Reverse Order
//input: 23 35
//output: 35 34 33 32 31 30 29 28 27 26 25 24 23

////////////////////////////////////////////////////////////////
//
// Function Name  :     RangeDisplayRev
// Description :        It is used to accept range from user and Return Addition all EVEN numbers in between that range in Reverse Order
// Input arguments :    Integer,Integer
// Output :             Integer
// Author :             Vibhuti Raosaheb Gudaghe
// Date :               18/10/2023 
//
////////////////////////////////////////////////////////////////

#include<stdio.h>
void RangeDisplayRev(int iStart , int iEnd)
{
    int iCnt=0;
    if(iStart>iEnd)
    {
        printf("Invalid Values");
    }
    for(iCnt=iEnd;iCnt>=iStart;iCnt--)
    {
        
        printf("%d\n",iCnt);
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

    RangeDisplayRev(iValue1,iValue2);
    return 0;
}