#include<stdio.h>


void Strlwrx(char str[])
{
    while(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
        {
            *str = *str + 32;
        }
        str++;
    } 
}
int main()
{
    char Arr[20];
   

    printf("Enter the string :");
    scanf("%[^'\n']s",&Arr);

    Strlwrx(Arr);
    printf("Lower case String is : %s\n",Arr); 
    return 0;
}