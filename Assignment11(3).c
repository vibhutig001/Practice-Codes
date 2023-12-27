//Problem Statement : write a program to Accept number from user and Count Frequency of 2 in it
//input: 2028
//output: 2

////////////////////////////////////////////////////////////////
//
// Function Name  :     CountTwo
// Description :        It is used to Accept number from user and count frequency of 2 in it
// Input arguments :    Integer
// Output :             Integer
// Author :             Vibhuti Raosaheb Gudaghe
// Date :               26/10/2023 
//
////////////////////////////////////////////////////////////////
#include<stdio.h>
int CountTwo(int iNo)
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
        if(iDigit==2)
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

    iRet=CountTwo(iVlaue);

    printf("%d",iRet);

    return 0;
}