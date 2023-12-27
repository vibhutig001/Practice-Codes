//display second maximum elements from linked list 
//input = 110 230 320 240
//output= 240

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
    int max = Head->data;
    int secMax = Head->next->data;

    while (Head != NULL)
    {
        if (Head->data > max)
        {
            secMax = max;
            max = Head->data;
        }
        else if (Head->data > secMax && Head->data != max)
        {
            secMax = Head->data;
        }

        Head = Head->next;
    }

    return secMax;
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
    printf("Second maximum element is : %d",iRet);

    return 0;
}


