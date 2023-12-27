#include<stdio.h>
//NOT RUN
int FactDiff(int iNo)
{
    
    int iCnt=0;
    int iSum=0;
    int iMinus=0;
    int Diff=0;

    for(iCnt=1; iCnt<=(iNo/2); iCnt++)
    {
        if((iNo % iCnt)==0)
        {
            iSum=iSum+iCnt; 
            
        }
        else if((iNo % iCnt)!=0)
        {
            iMinus=iMinus+iCnt;
        }
    }
    printf("hhhhh: %d\n",iSum); 
    printf("vvvvv: %d\n",iMinus); 
    Diff=iSum-iMinus;
    return Diff;
}
int main()
{
    int iValue1=0;
    int iRet=0;

    printf("Enter First Number :");
    scanf("%d",&iValue1);

    iRet=FactDiff(iValue1);
    printf("%d",iRet);
    
    return 0;
}