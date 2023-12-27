#include<stdio.h>
#define TRUE 1
#define FALSE 2

typedef int BOOL;

//Problem Statement : Accept one number from user and check whether number is even or odd


////////////////////////////////////////////////////////////////
//
// Function Name  :     Display
// Description :        It is used to check whether number is even or odd
// Input arguments :    Integer
// Output :             BOOL
// Author :             Vibhuti Raosaheb Gudaghe
// Date :               10/10/2023 
//
////////////////////////////////////////////////////////////////



BOOL ChkEven(int iNo)
{
    if(iNo%2==0)
    {
        return TRUE;
    }
    else{
        return FALSE;
    }
}

int main()
{
    int iValue=0;
    BOOL bRet=FALSE;

    printf("Enter the Number :");
    scanf("%d",&iValue);

    bRet=ChkEven(iValue);

    if(bRet==TRUE)
    {
        printf("Number is Even");
    }
    else{
        printf("Number is odd");
    }
    
    return 0;
}