#include<stdio.h>


/*  54321
    54321
    54321
*/
void Pattern(int iRow,int iCol)
{
    int i=0,j=0;
    for(i=1;i<=iRow;i++)
    {
        for(j=iRow;j>=iCol;j--)
        {
            if(j%2==0)
            {
                printf("%d",j);
            }
            else
            {
                printf("%d",j);
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