#include<stdio.h>

/*
    4444
    3333
    2222
    1111
*/
void Pattern(int iRow,int iCol)
{
    int i=0,j=0;
   
    for(i=iRow;i>=1;i--)
    {
        for(j=1;j<=iCol;j++)
        {
            printf("%d",i);
           
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