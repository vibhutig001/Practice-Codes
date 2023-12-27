#include<stdio.h>
#include<stdlib.h>
int MaxMin(int Arr[],int iSize)
{
    int iCnt=0;
    int iMax=Arr[0];
    int iMin=Arr[0];
    int iDiff=0;
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if(Arr[iCnt]>iMax)
        {
            iMax=Arr[iCnt];
        }
        if(Arr[iCnt]<iMin)
        {
            iMin=Arr[iCnt];
        }
    }
    printf("Maximum Element is %d \n",iMax);
    printf("Minimum Element is %d \n",iMin);
    iDiff=iMax-iMin;
    return iDiff;
}
int main()
{
    int iCount=0;
    int *ptr=NULL;
    int iCnt=0;
    int iRet=0;

    printf("Enter the Number of elements :");
    scanf("%d",&iCount);

    ptr=(int *)malloc(iCount *sizeof(int));

    printf("Dynamic memory gets allocated successfully for %d elememts \n",iCount);
    printf("Enter the %d values :\n",iCount);
    for(iCnt=0;iCnt<iCount;iCnt++)// Time Complexity : O(N)
    {
        printf("\nEnter the element no %d :",iCnt+1);
        scanf("%d",&ptr[iCnt]);
    }

    iRet=MaxMin(ptr,iCount);//Display(100,4)

    printf("\n%d",iRet);
    printf("Dynamic memory gets deallocated successfully\n");

    free(ptr); //free(100)

    return 0;
}