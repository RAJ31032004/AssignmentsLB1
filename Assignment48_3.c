////////////////////////////////////////////////////////////////////////////////
// Problem Statement: Write a program which multiplies each element of singly linear linked list by 2.
// Input Linked List : |10|->|20|->|30|
// Output: |20|->|40|->|60|
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

void MultiplyByTwo(PPNODE Head)
{
    PNODE temp = *Head;

    while(temp != NULL)
    {
        temp->Data = temp->Data * 2;
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

    InsertFirst(&First, 30);
    InsertFirst(&First, 20);
    InsertFirst(&First, 10);

    printf("Linked list before multiplication:\n");
    Display(First);

    MultiplyByTwo(&First);

    printf("Linked list after multiplying each element by 2:\n");
    Display(First);

    return 0;
}
