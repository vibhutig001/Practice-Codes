#include<stdio.h>
#include<stdlib.h>

//NOT RUN
void Range(int Arr[],int iLength,int iStart,int iEnd)
{
    int iCnt=0;
    int iSum=0;
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        printf("%d\t",Arr[iCnt]);    
    }
    printf("\n");
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
       for(Arr[iCnt]=iStart;Arr[iCnt]<iEnd;Arr[iCnt]++)
        {
           printf("%d\n",Arr[iCnt]);
        }
           
    }
    
}

int main()
{
    int iSize=0;
    int iCnt=0;
    int *p=NULL;
    
    int iValue1=0;
    int iValue2=0;

    printf("Enter the number of elements :\n");
    scanf("%d",&iSize);

    printf("Enter the Start number :\n");
    scanf("%d",&iValue1);

    printf("Enter the End number :\n");
    scanf("%d",&iValue2);

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

    Range(p,iSize,iValue1,iValue2);

    
    

    free(p);

    return 0;
}