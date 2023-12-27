#include<stdio.h>

/*
    A B C D
    a b c d
    A B C D
    a b c d
*/
void Pattern(int iRow,int iCol)
{
    int i=0,j=0;
    char ch='\0';
    for(i=1;i<=iRow;i++)
    {
        for(j=1,ch='A';j<=iCol;j++,ch++)
        {
            printf("%c",ch); 
        }
        printf("\n");
        for(j=1,ch='a';j<=iCol;j++,ch++)
        {
            printf("%c",ch); 
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