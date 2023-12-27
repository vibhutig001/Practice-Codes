//Problem Statement : write a program to accept number from user and display its table in reverse order
//input: 2
//output: 20 18 16 14 12 10 8 6 4 2

////////////////////////////////////////////////////////////////
//
// Function Name  :     Table
// Description :        It is used to accept number from user and display its table in reverse order
// Input arguments :    Integer
// Output :             Integer
// Author :             Vibhuti Raosaheb Gudaghe
// Date :               15/10/2023 
//
////////////////////////////////////////////////////////////////
#include<stdio.h>

void Table(int iNo)
{
    
    int iCnt=1;
    for(iCnt=10; iCnt>=1; iCnt--)
    {
        printf("%d\n",iNo*iCnt);
    }
    
    
}
int main()
{
    int iValue=0;
    int iRet=0;
    printf("Enter the number :");
    scanf("%d",&iValue);

    Table(iValue);

    
    return 0;
}