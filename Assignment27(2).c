#include<stdio.h>


void Struprx(char str[])
{
    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            *str = *str - 32;
        }
        str++;
    } 
}
int main()
{
    char Arr[20];
   

    printf("Enter the string :");
    scanf("%[^'\n']s",&Arr);

    Struprx(Arr);
    printf("Lower case String is : %s\n",Arr); 
    return 0;
}