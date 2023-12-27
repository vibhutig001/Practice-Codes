#include<stdio.h>
#include<stdbool.h>

int Difference(char str[])
{
    int iCnt=0;
    int iCap=0;
    int iSma=0;
    int Diff=0;
    
    while(*str!='\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            iCap++;
        }
        else if((*str >= 'A') && (*str <= 'Z'))
        {
            iSma++;
        }
        str++;
        
    }
    Diff=iCap-iSma;
    return Diff;
}
int main()
{
    char Arr[20];
    int iRet=0;

    printf("Enter the String :");
    scanf("%[^'\n]s",&Arr);
    
    iRet=Difference(Arr);

    printf("Difference of character  are : %d",iRet);
    
    return 0;
}