//Problem Statement : write a program to accept one number from user and check number is greater than 100 or not
//input: 101
//output: Greater

////////////////////////////////////////////////////////////////
//
// Function Name  :     ChkGreater
// Description :        It is used to accept one number from user and check number is greater than 100 or not
// Input arguments :    Integer
// Output :             String
// Author :             Vibhuti Raosaheb Gudaghe
// Date :               15/10/2023 
//
///////////////////////////////////////////////////////////////
#include<stdio.h>
typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL ChkGreater(int iNo)
{
    if(iNo>100)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}
int main()
{
    int iValue=0;
    BOOL bRet=FALSE;

    printf("Enter the number:");
    scanf("%d",&iValue);
    bRet=ChkGreater(iValue);
    if(bRet==TRUE)
    {
        printf("Greater");
    }
    else
    {
        printf("Smaller");
    }
    return 0;
}