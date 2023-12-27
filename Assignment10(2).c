//Problem Statement : Write a program which accept range from user and display all EVEN numbers in between that range
//input: 23 35
//output: 24 26 28 30 32 34

////////////////////////////////////////////////////////////////
//
// Function Name  :     RangeDisplayEven
// Description :        It is used to accept range from user and display all EVEN numbers in between that range
// Input arguments :    Integer,Integer
// Output :             Integer
// Author :             Vibhuti Raosaheb Gudaghe
// Date :               18/10/2023 
//
////////////////////////////////////////////////////////////////

#include<stdio.h>
void RangeDisplayEven(int iStart , int iEnd)
{
    int iCnt=0;
    if(iStart>iEnd)
    {
        printf("Invalid Values");
    }
    for(iCnt=iStart;iCnt<=iEnd;iCnt++)
    {
        
        if(iCnt%2==0)
        {
            printf("%d\n",iCnt);
        }
        
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

    RangeDisplayEven(iValue1,iValue2);
    return 0;
}