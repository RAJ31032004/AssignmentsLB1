////////////////////////////////////////////////////////////////////////////////
// Problem Statement: Write a program which replaces all even elements of singly linear linked list with 0.
// Input Linked List : |10|->|21|->|30|->|41|
// Output: |0|->|21|->|0|->|41|
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

void InsertFirst(PPNODE Head, int no)               // FUNCTION TO INSERT NODE AT FIRST POSITION
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

void ReplaceEven(PPNODE Head)                   // FUNCTION TO REPLACE EVEN ELEMENTS WITH 0
{
    PNODE temp = *Head;

    while(temp != NULL)
    {
        if((temp->Data % 2) == 0)
        {
            temp->Data = 0;
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

    printf("Linked list before replacing even numbers:\n");
    Display(First);

    ReplaceEven(&First);

    printf("Linked list after replacing even numbers with 0:\n");
    Display(First);

    return 0;
}
