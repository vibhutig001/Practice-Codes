#include<stdio.h>
int SumNonFact(int iNo)
{
    
    int iCnt=0;
    int iSum=0;
    

    for(iCnt=1; iCnt<=(iNo); iCnt++)
    {
        if((iNo % iCnt)!=0)
        {
            iSum=iSum+iCnt;
            
        }
    }
    return iSum;
}
int main()
{
    int iValue1=0;
    int iRet=0;

    printf("Enter First Number :");
    scanf("%d",&iValue1);

    iRet=SumNonFact(iValue1);
    printf("%d",iRet);
    
    return 0;
}