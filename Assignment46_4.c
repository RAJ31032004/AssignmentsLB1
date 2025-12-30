////////////////////////////////////////////////////////////////////////////////
// Problem Statement: Write a program which checks whether singly linear linked list is empty or not.
// Input Linked List : |10|->|20|->|30|
// Output: Linked list is not empty
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

void InsertFirst(PPNODE Head, int no)            // FUNCTION TO INSERT NODE AT FIRST POSITION
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

BOOL IsEmpty(PNODE Head)            // FUNCTION TO CHECK WHETHER LINKED LIST IS EMPTY OR NOT
{
    if(Head == NULL)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    PNODE First = NULL;
    BOOL bRet = FALSE;

    bRet = IsEmpty(First);

    if(bRet == TRUE)
    {
        printf("Linked list is empty\n");
    }
    else
    {
        printf("Linked list is not empty\n");
    }

    InsertFirst(&First, 10);

    bRet = IsEmpty(First);

    if(bRet == TRUE)
    {
        printf("Linked list is empty\n");
    }
    else
    {
        printf("Linked list is not empty\n");
    }

    return 0;
}
