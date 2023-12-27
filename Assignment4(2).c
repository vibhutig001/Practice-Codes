#include<stdio.h>

void FactRev(int iNo)
{
    
    int iCnt=0;
    
    

    for(iCnt=(iNo/2); iCnt>=1; iCnt--)
    {
        if((iNo % iCnt)==0)
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

    FactRev(iValue1);
    
    return 0;
}