#include<stdio.h>
//A B   C   D   E
void Pattern(int iNo)
{
    int iCnt=0;
    char ch='A';
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        printf("%c\t",ch);
        ch++;
    }
    printf("\n");
}
int main()
{
    int iValue=0;

    printf("Enter the Number of elements :");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}