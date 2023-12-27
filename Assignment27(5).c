#include <stdio.h>

void CountWhite(char str[])
{
    int iCnt=0;
    while (*str != '\0')
    {
        if (*str == ' ')
        {
            iCnt++;
        }

        str++;
    }
    printf("%d",iCnt);
}

int main()
{
    char Arr[20];

    printf("Enter the string :");
    scanf("%19[^\n]", Arr);

    printf("Digits in the string: ");
    CountWhite(Arr);

    return 0;
}
