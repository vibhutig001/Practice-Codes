#include<stdio.h>
#include<stdlib.h>

int Maximum(int Arr[],int iSize)
{
    int iCnt=0;
    int iMax=Arr[0];
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if(Arr[iCnt]>iMax)
        {
            iMax=Arr[iCnt];
        }
    }
    return iMax;
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

    iRet=Maximum(ptr,iCount);//Display(100,4)

    printf("Count is %d\n\n",iRet);
    printf("Dynamic memory gets deallocated successfully\n");

    free(ptr); //free(100)

    return 0;
}