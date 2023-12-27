#include<stdio.h>

/*
    2 4 6 8 10
    1 3 5 7 9
    2 4 6 8 10
    1 3 5 7 9
*/
void Pattern(int iRow,int iCol)
{
    int i=0,j=0;
   
    for(i=0;i<=iRow;i++)
    {
        for(j=1;j<=iCol;j++)
        {
            if(i%2==0)
            {
                printf("%d",2*j);
            }
            else
            {
                printf("%d",2*j-1);
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