#include<stdio.h>
#include<stdlib.h>

//NOT RUN
int FirstOcc(int Arr[],int iLength,int iNo)
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
       if(Arr[iCnt]==iNo)
        {
           return Arr[iCnt];
        }
           
    }
    
    return -1;
}

int main()
{
    int iSize=0;
    int iCnt=0;
    int *p=NULL;
    int iRet=0;
    int iValue=0;

    printf("Enter the number of elements :\n");
    scanf("%d",&iSize);

    printf("Enter the number :\n");
    scanf("%d",&iValue);

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

    iRet=FirstOcc(p,iSize,iValue);

    if(iRet==-1)
    {
        printf("Number is NOT Present");
    }
    else
    {
        printf("first occurance of number is %d",iRet);
    }
    

    free(p);

    return 0;
}