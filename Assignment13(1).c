#include<stdio.h>
#include<stdlib.h>
int Difference(int Arr[],int iLength)
{
    int iCnt=0;
    int iDiff,iEven,iOdd;
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt]%2==0)
        {
            iEven=iEven+Arr[iCnt];
        }
        else
        {
            iOdd=iOdd+Arr[iCnt];
        }
    }
    printf("Even is :%d\n",iEven);
    printf("Odd is :%d\n",iOdd);
    iDiff=iEven-iOdd;
    return iDiff;
}

int main()
{
    int iSize=0;
    int iRet=0;
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

    iRet=Difference(p,iSize);

    printf("Result is %d",iRet);

    free(p);

    return 0;
}