#include<stdio.h>

/*
   abcde
   12345
   abcde
   12345
*/
void Pattern(int iRow,int iCol)
{
    int i=0,j=0;
    char ch='\0';
    for(i=1;i<=iRow;i++)
    {
        for(j=1,ch='a';j<=iCol;j++,ch++)
        {
            if(i%2!=0)
            printf("%c",ch);
            else
            printf("%d",j);
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