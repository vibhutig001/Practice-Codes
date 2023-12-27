#include<stdio.h>
#include<stdlib.h>
void Display(int Arr[],int iLength)
{
    int iCnt=0;
    
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        printf("%d\t",Arr[iCnt]);    
    }
    printf("\n");
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
       if(Arr[iCnt]%11==0)
        {
            printf("%d\t",Arr[iCnt]);
        }   
    }
}

int main()
{
    int iSize=0;
    int iCnt=0;
    int *p=NULL;

    printf("Enter the number of elements :\n");
    scanf("%d",&iSize);

    p=(int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }

    printf("Enter %d elements \n",iSize);
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        printf("Enter element :  %d \n",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    Display(p,iSize);

    free(p);

    return 0;
}