#include <stdio.h>

int LastChar(char str[],char ch)
{
   int iCnt=-1;
   int index=0;
    while (*str != '\0')
    {
        if (*str == ch)
        {
            iCnt = index;
        }

        str++;
        index++;
    }
    return iCnt; 
}

int main()
{
    char Arr[20];
    char cValue;
    int iRet=0;

    printf("Enter the string :");
    scanf("%[^\n]s", Arr);

    printf("Enter the character: \n");
    scanf(" %c",&cValue);

    iRet=LastChar(Arr,cValue);

    if(iRet!=-1)
    {
        printf("Count is : %d",iRet);
    }
    else
    {
        printf("Character not found");
    }
    

    return 0;
}
