#include<stdio.h>
#include<stdbool.h>

void ChkAlpha(char ch)
{
    if(ch=='A' || ch=='a')
    {
        printf("Exam at 7 AM ");
    }
    
    else if(ch=='B'|| ch=='b')
    {
        printf("Exam at 8:30 AM ");
    }
    else if(ch=='C'|| ch=='c')
    {
        printf("Exam at 9:20 AM ");
    }
    else if(ch=='D'|| ch=='d')
    {
        printf("Exam at 10:30 AM ");
    }
    else
    {
        printf("Wrong division..");
    }
}
int main()
{
    char chDiv='\0';
    

    printf("Enter your division :");
    scanf("%c",&chDiv);

    ChkAlpha(chDiv);

    
    return 0;
}