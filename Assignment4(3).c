#include<stdio.h>
void NonFact(int iNo)
{
    int iCnt=0;
    for(iCnt=1; iCnt<=(iNo); iCnt++)
    {
        if((iNo % iCnt)!=0)
        {
            printf("%d\n",iCnt);
            
        }
    }
    
}
int main()
{
    int iValue1=0;
    

    printf("Enter First Number :");
    scanf("%d",&iValue1);

    NonFact(iValue1);
    
    
    return 0;
}