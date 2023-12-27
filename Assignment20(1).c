#include<stdio.h>


/*
    1234
    5678
    1234
    5678
*/
void Pattern(int iRow,int iCol)
{
    int i=0,j=0,iCnt=1;
   
    for(i=1;i<=iRow;i++)
    {
        for(j=1;j<=iCol;j++)
        {
            
                printf("%d",iCnt);
            iCnt++;
           
        }
      
        printf("\n");
    }

}
int main()
{
    int iValue1=0;
    int iValue2=0;

    printf("Enter number of rows :");
    scanf("%d",&iValue1);
    printf("Enter the number of Colmn :");
    scanf("%d",&iValue2);

    Pattern(iValue1,iValue2);

    return 0;
}