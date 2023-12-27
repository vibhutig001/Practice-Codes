//display Addition of even elements elements from linked list 
//input = 11 20 32 41
//output= 52

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
int AdditionEven(PNODE Head)
{
    int iSum=0;
    int iCnt=0;
    while(Head != NULL)
    {
        if((Head->data) % 2 == 0)
        {
            iSum=iSum+Head->data;
        }
        Head=Head->next;
    }
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

    iRet=AdditionEven(First);
    printf("Sum of even Elements are : %d",iRet);

    return 0;
}


