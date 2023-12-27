//Problem Statement : write a program to accept number from user and display its table
//input: 2
//output: 2 4 6 8 10 12 14 16 18 20

////////////////////////////////////////////////////////////////
//
// Function Name  :     Table
// Description :        It is used to accept number from user and display its table
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
    for(iCnt=1; iCnt<=10; iCnt++)
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