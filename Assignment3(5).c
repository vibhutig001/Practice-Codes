#include<stdio.h>
typedef int BOOL;
# define TRUE 1
# define FALSE 0

BOOL ChkVowel(char CValue)
{
    
    if(CValue=='a' || CValue=='e'||CValue=='i'||CValue=='o'||CValue=='u'||
    CValue=='A'||CValue=='E'||CValue=='I'||CValue=='O'||CValue=='U')
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    char cValue = '\0';
    BOOL bRet=FALSE;

    printf("Enter Character: ");
    scanf("%c", &cValue);

    bRet=ChkVowel(cValue);
    if(bRet== TRUE)
    {
        printf("It is vowel");
    }
    else
    {
        printf("It is NOT vowel");
    }
    return 0;
}