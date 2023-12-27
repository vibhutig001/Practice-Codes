#include<stdio.h>
#include<stdbool.h>

void DisplayASCII()
{
    int iCnt=0;
    for(iCnt = 0; iCnt <= 255; iCnt++)
    {
        printf("%c\t%d\t%o\t%x\n",iCnt,iCnt,iCnt,iCnt);
    }
}
int main()
{
    
    DisplayASCII();

    
    return 0;
}