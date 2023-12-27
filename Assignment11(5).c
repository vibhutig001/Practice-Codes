//Problem Statement : write a program to Accept number from user and Count Frequency of such a digit which are less then 6
//input: 1018
//output: 3

////////////////////////////////////////////////////////////////
//
// Function Name  :     Count
// Description :        It is used to Accept number from user and Count Frequency of such a digit which are less then 6
// Input arguments :    Integer
// Output :             Integer
// Author :             Vibhuti Raosaheb Gudaghe
// Date :               26/10/2023 
//
////////////////////////////////////////////////////////////////
#include<stdio.h>
int Count(int iNo)
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
        if(iDigit<6)
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

    iRet=Count(iVlaue);

    printf("%d",iRet);

    return 0;
}