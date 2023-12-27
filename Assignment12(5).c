//Problem Statement : write a program to Accept number from user and return Difference between Summetion of all Even Numbers and 
//Summetion of all Odd Numbers 
//input: 2395
//output: -15 (2-17)

////////////////////////////////////////////////////////////////
//
// Function Name  :     CountDiff
// Description :        It is used to Accept number from user and return Difference between Summetion of all Even Numbers and 
//                      Summetion of all Odd Numbers 
// Input arguments :    Integer
// Output :             Integer
// Author :             Vibhuti Raosaheb Gudaghe
// Date :               26/10/2023 
//
////////////////////////////////////////////////////////////////

#include<stdio.h>
int CountDiff(int iNo)
{
    int iEven=0;
    int iOdd=0;
    int iDiff=0;
    int iDigit=0;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    while(iNo!=0)
    {
        iDigit=iNo%10;
        if(iDigit%2==0)
        {
            iEven=iEven+1;
            //printf("%d\n",&iEven);
        }
        else if(iDigit%2!=0)
        {
            iOdd=iOdd+1;
            //printf("%d\n",&iOdd);
        }
        iNo=iNo/10;
    }
    iDiff=iEven-iOdd;
    return iDiff;
}

int main()
{
    int iVlaue=0;
    int iRet=0;
    printf("Enetr number:");
    scanf("%d",&iVlaue);

    iRet=CountDiff(iVlaue);

    printf("%d",iRet);

    return 0;
}