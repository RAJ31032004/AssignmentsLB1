////////////////////////////////////////////////////////////////////////////////
// Problem Statement: Write a program which displays elements of singly linearlinked list in reverse order.
// Input Linked List : |10|->|20|->|30|
// Output: |30|->|20|->|10|
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

void DisplayReverse(PNODE Head)             // FUNCTION TO DISPLAY LINKED LIST IN REVERSE ORDER 
{
    if(Head == NULL)
    {
        return;
    }

    DisplayReverse(Head->Next);
    printf("|%d|->", Head->Data);
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

    printf("Linked list:\n");
    Display(First);

    printf("Linked list in reverse order:\n");
    DisplayReverse(First);
    printf("NULL\n");

    return 0;
}
