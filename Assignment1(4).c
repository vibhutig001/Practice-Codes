#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

//Problem Statement : Accept one number and check whether it is divisible by 5 or not


////////////////////////////////////////////////////////////////
//
// Function Name  :     Check
// Description :        It is used to check whether it is divisible by 5 or not
// Input arguments :    Integer
// Output :             BOOl
// Author :             Vibhuti Raosaheb Gudaghe
// Date :               10/10/2023 
//
////////////////////////////////////////////////////////////////

BOOL Check(int iNo)
{
    if((iNo%5)==0)
    {
        return  TRUE;
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

    bRet=Check(iValue);
    if(bRet==TRUE)
    {
        printf("Divisible by 5");
    }
    else
    {
        printf("Not divisible by 5");
    }
    return 0;

}