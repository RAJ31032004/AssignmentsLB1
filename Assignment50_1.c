////////////////////////////////////////////////////////////////////////////////
// Problem Statement: Write a program which replaces all negative elements of
// singly linear linked list with their absolute values.
// Input Linked List : |10|->|-20|->|30|->|-40|
// Output: |10|->|20|->|30|->|40|
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

void InsertFirst(PPNODE Head, int no)           // Function to insert node at first position
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

void MakeAbsolute(PPNODE Head)          // Function to replace negative numbers with absolute value
{
    PNODE temp = *Head;

    while(temp != NULL)
    {
        if(temp->Data < 0)
        {
            temp->Data = -(temp->Data);
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

    InsertFirst(&First, -40);
    InsertFirst(&First, 30);
    InsertFirst(&First, -20);
    InsertFirst(&First, 10);

    printf("Linked list before making absolute:\n");
    Display(First);

    MakeAbsolute(&First);

    printf("Linked list after making absolute:\n");
    Display(First);

    return 0;
}
