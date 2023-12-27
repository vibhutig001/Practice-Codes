//Problem Statement : write a program to Accept number from user and return Multliplacation of digits 
//input: 2395
//output: 270

////////////////////////////////////////////////////////////////
//
// Function Name  :     MultDigits
// Description :        It is used to Accept number from user and return Multliplacation of digits 
// Input arguments :    Integer
// Output :             Integer
// Author :             Vibhuti Raosaheb Gudaghe
// Date :               26/10/2023 
//
////////////////////////////////////////////////////////////////
#include<stdio.h>
int MultDigits(int iNo)
{
    int iSum=1;
    int iDigit=0;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    while(iNo!=0)
    {
        iDigit=iNo%10;
        if(iDigit!=0)
        {
            iSum=iSum*iDigit;
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

    iRet=MultDigits(iVlaue);

    printf("%d",iRet);

    return 0;
}