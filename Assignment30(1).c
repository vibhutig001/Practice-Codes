//display perfect elements from linked list 
//input = 11 28 17 41 6 89
//output= 6 28

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
int DisplayPerfect(PNODE Head)
{
    int iCnt=0;
    int iSum=0;
    for(iCnt=1; iCnt<=(Head->data/2); iCnt++)
    {
        if((Head->data % iCnt)==0)
        {
            iSum=iSum+iCnt;
        }
    }
    return iSum;
}
int main()
{
    PNODE First=NULL;
    int Value=0;
    int iRet=0;

    InsertFirst(&First,89);
    InsertFirst(&First,6);
    InsertFirst(&First,41);
    InsertFirst(&First,17);
    InsertFirst(&First,28);
    InsertFirst(&First,11);

    Display(First);

    iRet=DisplayPerfect(First);
    printf("Perfect Elements are : %d",iRet);

    return 0;
}