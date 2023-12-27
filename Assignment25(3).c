#include<stdio.h>
#include<stdbool.h>

void Display(char ch)
{
    int iCnt=0;
    if(ch >= 'A' && ch <= 'Z')
    {
        for(iCnt=ch; iCnt<='Z';iCnt++,ch++)
        {
            printf("%c",ch);
        }
        
    }
    else if(ch >= 'a' && ch <= 'z')
    {
        for(iCnt=ch; iCnt>='a';iCnt--,ch--)
        {
            printf("%c",ch);
        }
        
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