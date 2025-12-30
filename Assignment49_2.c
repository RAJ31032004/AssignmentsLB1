////////////////////////////////////////////////////////////////////////////////
// Problem Statement: Write a program which checks whether all elements of 
// singly linear linked list are positive.
// Input Linked List : |10|->|20|->|30|
// Output: TRUE
// Name : Raj Samir Jadhav
// Date : 30/12/2025
///////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

struct node
{
    int Data;
    struct node *Next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE Head, int no)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->Data = no;
    newn->Next = NULL;

    if(*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        newn->Next = *Head;
        *Head = newn;
    }
}

BOOL CheckAllPositive(PNODE Head)                       // Function to check whether all elements are positive

{
    while(Head != NULL)
    {
        if(Head->Data <= 0)
        {
            return FALSE;
        }
        Head = Head->Next;
    }
    return TRUE;
}

void Display(PNODE Head)
{
    while(Head != NULL)
    {
        printf("|%d|->", Head->Data);
        Head = Head->Next;
    }
    printf("NULL\n");
}

int main()
{
    PNODE First = NULL;
    BOOL bRet = FALSE;

    InsertFirst(&First, 30);
    InsertFirst(&First, 20);
    InsertFirst(&First, 10);

    printf("Linked list:\n");
    Display(First);

    bRet = CheckAllPositive(First);

    if(bRet == TRUE)
    {
        printf("All elements are positive\n");
    }
    else
    {
        printf("All elements are not positive\n");
    }

    return 0;
}
