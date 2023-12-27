//Problem Statement : write a program to Accept number from user and Check whether it contain 0 or not
//input: 2095
//output: It contain Zero

////////////////////////////////////////////////////////////////
//
// Function Name  :     ChkZero
// Description :        It is used to Accept number from user and Check whether it contain 0 or not
// Input arguments :    Integer
// Output :             Integer
// Author :             Vibhuti Raosaheb Gudaghe
// Date :               26/10/2023 
//
////////////////////////////////////////////////////////////////
#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkZero(int iNo)
{
    if(iNo<0)
    {
        iNo=-iNo;
    }
    while(iNo!=0)
    {
        int iDigit=iNo % 10;
        if(iDigit == 0)
        {
            return TRUE;
        }
        iNo=iNo/10;
    }
    return FALSE;
}
int main()
{
    int iValue=0;
    BOOL bRet = FALSE;

    printf("Enter Number:");
    scanf("%d",&iValue);

    bRet=ChkZero(iValue);

    if(bRet==TRUE)
    {
        printf("It contain Zero");
    }
    else
    {
        printf("It NOT contain Zero");
    }
    return 0;
}