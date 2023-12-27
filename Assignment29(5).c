//display smallest element from linked list 
//input = 10 20 30 40 

//output 10

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
int Minimum(PNODE Head)
{
    int min=Head->data;

    while (Head != NULL)
    {
        if(Head->data<min)
        {
            min=Head->data;
        }
        Head=Head->next;
    }
    return min;
}
int main()
{
    PNODE First=NULL;
    int Value=0;
    int iRet=0;

    InsertFirst(&First,70);
    InsertFirst(&First,30);
    InsertFirst(&First,50);
    InsertFirst(&First,40);
    InsertFirst(&First,30);
    InsertFirst(&First,20);
    InsertFirst(&First,10);

    Display(First);

    iRet=Minimum(First);
    printf("Addition of Elements is : %d",iRet);

    return 0;
}