#include<stdio.h>


/*
   1 2 3 4 5
   1 2     5
   1   3   5
   1     4 5
   1 2 3 4 5
*/
void Pattern(int iRow,int iCol)
{
    int i=0,j=0;
    int n=5;
   
    for(i=1;i<=iRow;i++)
    {
        for(j=1;j<=iCol;j++)
        {
            if((i+j)==(n+1))
            {
                printf("#");

            }
            else{
                printf("*");
            }
            
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