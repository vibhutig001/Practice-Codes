#include <stdio.h>

int FirstChar(char str[],char ch)
{
   int iCnt=0;
    while (*str != '\0')
    {
        if (*str == ch)
        {
            return iCnt;
        }

        str++;
        iCnt++;
    }
    return -1; 
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

    iRet=FirstChar(Arr,cValue);

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
