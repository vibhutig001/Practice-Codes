#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int  BOOL;

BOOL ChkAlpha(char ch)
{
    if(ch >= 33 && ch <= 42 || ch==94 || ch==64)
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
        printf("It is Special Symbol");
    }
    else
    {
        printf("It is not Special Symbol");
    }

    return 0;
}