//Problem Statement : write a program to accept name from user and print that name
//input: Vibhuti Gudaghe
//output: Vibhuti Gudaghe

////////////////////////////////////////////////////////////////
//
// Function Name  :     
// Description :        It is used to accept name from user and print that name
// Input arguments :    
// Output :             String
// Author :             Vibhuti Raosaheb Gudaghe
// Date :               15/10/2023 
//
///////////////////////////////////////////////////////////////
#include<stdio.h>
int main()
{
    char Name[50];
    printf("Please enter full name :");
    scanf(" %29[^\n]",&Name);
    printf("your name is :%s",Name);
    return 0;

}