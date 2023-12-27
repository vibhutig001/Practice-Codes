#include<stdio.h>
#include<stdbool.h>

void Display(char ch)
{
    int iCnt=0;
    if(ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z')
    {
        printf("Decimal :%d\n",ch );
        printf("HexaDecimal :%x\n",ch );
        printf("Octal :%o\n",ch );
    }
    


}
int main()
{
    char cValue='\0';

    printf("Enter the character :");
    scanf("%c",&cValue);
    
    Display(cValue);

    
    return 0;
}