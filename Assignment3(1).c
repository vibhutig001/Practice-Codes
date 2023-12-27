#include <stdio.h>

void PrintEven(int iNo)
{
    if (iNo <= 0)
    {
        return;
    }

    for (int iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if (iCnt % 2 == 0)
        {
            if (iCnt < iNo)
            {
                printf("%d\n", iCnt);
            }
              
        }
    }
}

int main()
{
    int iValue = 0;
    printf("Enter the Number: ");
    scanf("%d", &iValue);

    PrintEven(iValue);
    return 0;
}
