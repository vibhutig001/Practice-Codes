#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int  BOOL;

BOOL ChkAlpha(char ch)
{
    if(ch >= '0' && ch <= '9')
    {
        
        return TRUE;
    }
    return FALSE;
}
int main()
{
    char cValue='\0';
    BOOL bRet=FALSE;

    printf("Enter the chharacter :");
    scanf("%c",&cValue);

    bRet=ChkAlpha(cValue);

    if(bRet==TRUE)
    {
        printf("It is Digit");
    }
    else
    {
        printf("It is not Digit");
    }

    return 0;
}