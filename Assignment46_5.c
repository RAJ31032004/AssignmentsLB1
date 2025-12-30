////////////////////////////////////////////////////////////////////////////////
// Problem Statement: Write a program which increments each element of singly linear linked list by 1.
// Input Linked List : |10|->|20|->|30|
// Output            : |11|->|21|->|31|
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

void IncrementAll(PPNODE Head)          // FUNCTION TO INCREMENT EACH ELEMENT BY 1  
{
    PNODE temp = *Head;

    while(temp != NULL)
    {
        temp->Data = temp->Data + 1;
        temp = temp->Next;
    }
}

void Display(PNODE Head)                    // FUNCTION TO DISPLAY THE LINKED LIST
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

    printf("Linked list before increment:\n");
    Display(First);

    IncrementAll(&First);

    printf("Linked list after increment:\n");
    Display(First);

    return 0;
}
