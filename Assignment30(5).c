//display Addition of digits from linked list 
//input = 110 230 20 240 640
//output= 2 5 2 6 10

#include<stdio.h>
#include<stdlib.h>
struct node 
{
    int data;
    struct node *next;
};
typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;
void InsertFirst(PPNODE Head,int No)
{
    PNODE newn=NULL;
    newn=(PNODE)malloc(sizeof(NODE));

    newn->data=No;
    newn->next=NULL;

    if(*Head == NULL)
    {
        *Head=newn;
    }
    else
    {
        newn->next=*Head;
        *Head=newn;
    }
}
void Display(PNODE Head)
{
    int iCnt=0;
    while(Head != NULL)
    {
        printf("%d \t",Head->data);
        Head=Head->next;
    }
    printf("\n");
}
int SumDigit(PNODE Head)
{
    int iSum=0;
    int iDigit=0;
    
    int num = Head->data; 
        while (Head != NULL)
        {
            iDigit = num % 10;
            iSum = iSum + iDigit;
            printf("%d\n",iDigit);
            num = num / 10;
        }

        Head = Head->next;
    

    return iSum;
}
int main()
{
    PNODE First=NULL;
    int Value=0;
    int iRet=0;

   
    InsertFirst(&First,41);
    InsertFirst(&First,32);
    InsertFirst(&First,20);
    InsertFirst(&First,11);

    Display(First);

    iRet=SumDigit(First);
    printf("Sum of digits are is : %d",iRet);

    return 0;
}


