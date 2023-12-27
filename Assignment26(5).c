#include<stdio.h>

//not run
void Reverse(char str[])
{
    int iCnt=0;
    int ilen=0;
    while(*str != '\0')
    {
        ilen++;
        str++;
    }
    for(iCnt=ilen;iCnt>=0;iCnt--)
    {
        
    }
    printf("reverse string is : %c",iCnt);

    
}
int main()
{
    char Arr[20];
   

    printf("Enter the string :");
    scanf("%[^'\n']s",&Arr);

    Reverse(Arr);

    return 0;
}