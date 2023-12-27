#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int  BOOL;

BOOL ChkAlpha(char str[])
{
    int iCnt=0;
    while(*str != '\0')
    {
        if(*str == 'a' || *str == 'e' || *str == 'i' || *str == 'o' || *str == 'u' || *str == 'A' || *str == 'E' || *str == 'I' || *str == 'O' || *str == 'U')
        {
            iCnt++;
        }
        str++;
        
    }

    if(iCnt>0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }

    //return(iCnt > 0) ? TRUE : FALSE;
    
}
int main()
{
    char Arr[20];
    BOOL bRet=FALSE;

    printf("Enter the string :");
    scanf("%[^'\n']s",&Arr);

    bRet=ChkAlpha(Arr);

    if(bRet==TRUE)
    {
        printf("It contain Vowel character");
    }
    else
    {
        printf("It contain not Vowel character");
    }

    return 0;
}