//Problem Statement : write a program to Accept number from user and return count of odd digits
//input: 2395
//output: 3

////////////////////////////////////////////////////////////////
//
// Function Name  :     CountOdd
// Description :        It is used to Accept number from user and return count of odd digits
// Input arguments :    Integer
// Output :             Integer
// Author :             Vibhuti Raosaheb Gudaghe
// Date :               26/10/2023 
//
////////////////////////////////////////////////////////////////
#include<stdio.h>
int CountOdd(int iNo)
{
    int iSum=0;
    int iDigit=0;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    while(iNo!=0)
    {
        iDigit=iNo%10;
        if(iDigit%2!=0)
        {
            iSum=iSum+1;
        }
        iNo=iNo/10;
    }
    return iSum;
}

int main()
{
    int iVlaue=0;
    int iRet=0;
    printf("Enetr number:");
    scanf("%d",&iVlaue);

    iRet=CountOdd(iVlaue);

    printf("%d",iRet);

    return 0;
}