//display first occurance elements from linked list 
//input = 10 20 30 40 50 30 70
//input= 30
//output 3 

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
int SearchFirstOcc(PNODE Head,int No)
{
    int iCnt=0;
    while (Head!=NULL)
    {
        iCnt++;
        if(Head->data==No)
        {
            return iCnt;
        }
        Head=Head->next;
    }
    
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

    printf("Enter the element that you want to found :\n");
    scanf("%d",&Value);

    iRet=SearchFirstOcc(First,Value);
    printf("Element found at : %d",iRet);

    return 0;
}