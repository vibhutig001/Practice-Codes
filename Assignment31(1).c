//not run 

//input= 22 34 56 78 
//output= 22 43 65 87 
//reverse digits
 
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
int ReverseDigits(int number)
{
    int reversedNumber = 0;
    
    while (number != 0)
    {
        int digit = number % 10;
        reversedNumber = reversedNumber * 10 + digit;
        number /= 10;
    }
    
    return reversedNumber;
}

void ReverseElements(PNODE Head)
{
    while (Head != NULL)
    {
        Head->data = ReverseDigits(Head->data);
        Head = Head->next;
    }
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

    ReverseElements(First);
    printf("")
   
    return 0;
}


