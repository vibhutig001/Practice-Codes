#include<stdio.h>
#include<stdbool.h>

int Display(char str[])
{
    int iCnt=0;
    
    while(*str!='\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
            iCnt++;
        }
        str++;
        
    }
    return iCnt;
}
int main()
{
    char Arr[20];
    int iRet=0;

    printf("Enter the String :");
    scanf("%[^'\n]s",&Arr);
    
    iRet=Display(Arr);

    printf("Capital character are : %d",iRet);
    
    return 0;
}