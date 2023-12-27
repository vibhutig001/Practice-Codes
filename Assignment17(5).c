#include<stdio.h>
//not run
// 2 4 6 8 10 12 14 
void Pattern(int iNo)
{
    int iCnt=0;
   
    for(iCnt=0;iCnt<=iNo;iCnt++)
    {
        if(iCnt%2==0)
        printf("%d",iCnt);
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