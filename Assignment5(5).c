
//Problem Statement : write a program to accept total marks and obtained marks and calculate percentage
//input: 5 4 7 
//output: 140

////////////////////////////////////////////////////////////////
//
// Function Name  :     Percentage
// Description :        It is used to accept total marks and obtained marks and calculate percentage
// Input arguments :    Integer Integer
// Output :             float
// Author :             Vibhuti Raosaheb Gudaghe
// Date :               15/10/2023 
//
///////////////////////////////////////////////////////////////
#include<stdio.h>

int Percentage(int iNo1,int iNo2)
{
    float Per=0.0f;
    Per=((float)iNo2)*100/iNo1;
    return Per;
}
int main()
{
    int iValue1=0,iValue2=0;
    float fRet=0.0f;

    printf("Enter total marks :");
    scanf("%d",&iValue1);

    printf("Enter obtained marks :");
    scanf("%d",&iValue2);

    fRet=Percentage(iValue1,iValue2);

    printf("%2f",fRet);
    return 0;
}