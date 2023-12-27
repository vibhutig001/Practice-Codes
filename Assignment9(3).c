//Problem Statement : Write a program which accept Distance in Kilometer and convert it into meter(1KM=1000M)
//input: 5
//output: 1000

////////////////////////////////////////////////////////////////
//
// Function Name  :     KMToMeter
// Description :        It is used to accept Distance in Kilometer and convert it into meter
// Input arguments :    integer
// Output :             integer
// Author :             Vibhuti Raosaheb Gudaghe
// Date :               18/10/2023 
//
////////////////////////////////////////////////////////////////
#include<stdio.h>

int KMToMeter(int iNo)
{
    int iAns=0;
    iAns=1000*iNo;
    return iAns;
}
int main()
{
    int iValue=0;
    int iRet=0;
    printf("Enter the Distance :");
    scanf("%d",&iValue);

    iRet=KMToMeter(iValue);

    printf("Distance from KM to M is : %d",iRet);

    return 0;
}