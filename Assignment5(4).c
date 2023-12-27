//Problem Statement : write a program to accept three number from user and display its multiplication
//input: 5 4 7 
//output: 140

////////////////////////////////////////////////////////////////
//
// Function Name  :     ChkEqual
// Description :        It is used to accept three number from user and display its multiplication
// Input arguments :    Integer Integer Integer
// Output :             Integer
// Author :             Vibhuti Raosaheb Gudaghe
// Date :               15/10/2023 
//
///////////////////////////////////////////////////////////////
#include<stdio.h>
// NOT handle condition 0 6 0

int Multiply(int iNo1 ,int iNo2,int iNo3)
{
    int Mul=1;
    
    
    if(iNo1==0 )
    {
        Mul=iNo2*iNo3;
    }
    else if(iNo1==0 && iNo2==0)
    {
        Mul=iNo3;
    }
    else if(iNo2==0)
    {
        Mul=iNo1*iNo3;
    }
    else if(iNo2==0 && iNo3==0)
    {
        Mul=iNo1;
    }
    else if(iNo3==0)
    {
        Mul=iNo2*iNo1;
    }
    else if(iNo1==0 && iNo3==0)
    {
        Mul=iNo2;
    }

    else{
        Mul=iNo1*iNo2*iNo3;
        
    }
    return Mul;
}
int main()
{
    int iValue1=0,iValue2=0,iValue3=0,iRet=0;
    
    printf("Enter three number:");
    scanf("%d%d%d",&iValue1,&iValue2,&iValue3);
    
    iRet=Multiply(iValue1,iValue2,iValue3);

    printf("Multiplication of three Numbers Are: %d",iRet);
  
}