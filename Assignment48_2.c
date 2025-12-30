////////////////////////////////////////////////////////////////////////////////
// Problem Statement: Write a program which replaces all odd elements of
// singly linear linked list with 1.
// Input Linked List : |10|->|21|->|30|->|41|
// Output: |10|->|1|->|30|->|1|
// Name : Raj Samir Jadhav
// Date : 30/12/2025
///////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

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

void ReplaceOdd(PPNODE Head)            // FUNCTION TO REPLACE ODD ELEMENTS WITH 1
{
    PNODE temp = *Head;

    while(temp != NULL)
    {
        if((temp->Data % 2) != 0)
        {
            temp->Data = 1;
        }
        temp = temp->Next;
    }
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

    InsertFirst(&First, 41);
    InsertFirst(&First, 30);
    InsertFirst(&First, 21);
    InsertFirst(&First, 10);

    printf("Linked list before replacing odd numbers:\n");
    Display(First);

    ReplaceOdd(&First);

    printf("Linked list after replacing odd numbers with 1:\n");
    Display(First);

    return 0;
}
