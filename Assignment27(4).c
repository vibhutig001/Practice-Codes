#include <stdio.h>

void DisplayDigit(char str[])
{
    while (*str != '\0')
    {
        if (*str >= '0' && *str <= '9')
        {
            printf("%c ", *str);
        }

        str++;
    }
}

int main()
{
    char Arr[20];

    printf("Enter the string :");
    scanf("%19[^\n]", Arr);

    printf("Digits in the string: ");
    DisplayDigit(Arr);

    return 0;
}
