//palindrome elements 
//not run
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
void VoidPalindrome(PNODE Head)
{
   int iCopy=Head->data;      //Xerox Kadhli
    int iDigit=0;
    int iRev=0;

    while(Head!=NULL)
    {
        iDigit=Head->data%10;
        Head->data=Head->data/10;
        iRev=(iRev*10)+iDigit;  
    }
     if(iRev==iCopy)
     {
        printf("%d",iRev);
     }
     
}
int main()
{
    PNODE First=NULL;
    int Value=0;
    int iRet=0;

   
    InsertFirst(&First,41);
    InsertFirst(&First,32);
    InsertFirst(&First,202);
    InsertFirst(&First,111);

    Display(First);

    VoidPalindrome(First);
    

    return 0;
}


