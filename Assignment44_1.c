///////////////////////////////////////////////////////////////////////////////
 // Problem Statement: Write a program which searches first occurrence of particular element from singly linear linked list.
 // Input Linked List : |10|->|20|->|30|->|40|->|50|
 // Input Element : 30
 // Output : Element is present
 // Name : Raj Samir Jadhav
 // Date : 29/12/2025
 /////////////////////////////////////////////////////////////////////////////

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

BOOL Search(PNODE Head, int No)         // FUNCTION TO SEARCH ELEMENT
{
    while(Head != NULL)
    {
        if(Head->Data == No)
        {
            return TRUE;
        }
        Head = Head->Next;
    }
    return FALSE;
}

int main()
{
    PNODE First = NULL;
    BOOL bRet = FALSE;

    InsertFirst(&First, 70);
    InsertFirst(&First, 30);
    InsertFirst(&First, 50);
    InsertFirst(&First, 40);
    InsertFirst(&First, 20);
    InsertFirst(&First, 10);

    bRet = Search(First, 50);

    if(bRet == TRUE)
    {
        printf("Element is present\n");
    }
    else
    {
        printf("Element is not present\n");
    }

    return 0;
}
