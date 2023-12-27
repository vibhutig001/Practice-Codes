//Problem Statement : write a program to Accept number from user and return count of digits in Between 3 and 7
//input: 2395
//output: 1

////////////////////////////////////////////////////////////////
//
// Function Name  :     CountRange
// Description :        It is used to Accept number from user and return count of digits in Between 3 and 7
// Input arguments :    Integer
// Output :             Integer
// Author :             Vibhuti Raosaheb Gudaghe
// Date :               26/10/2023 
//
////////////////////////////////////////////////////////////////
#include<stdio.h>
int CountRange(int iNo)
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
        if(iDigit>3 && iDigit<7)
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

    iRet=CountRange(iVlaue);

    printf("%d",iRet);

    return 0;
}