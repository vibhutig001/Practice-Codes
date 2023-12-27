#include<stdio.h>
#include<stdlib.h>
int CountEven(int Arr[],int iLength)
{
    int iCnt=0;
    int iEven=0;
    int iOdd=0;
    int iDiff=0;
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        printf("%d\t",Arr[iCnt]);    
    }
    printf("\n");
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
       if(Arr[iCnt]%2==0)
        {
            iEven++;
        }
        else
        {
            iOdd++;
        }   
    }
    iDiff=iEven-iOdd;
    return iDiff;
}

int main()
{
    int iSize=0;
    int iCnt=0;
    int *p=NULL;
    int iRet=0;

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

    iRet=CountEven(p,iSize);

    printf("Count is %d",iRet);

    free(p);

    return 0;
}