////////////////////////////////////////////////////////////////////////////////
// Problem Statement: Write a program which displays the element at given
// position (Nth position) in singly linear linked list.
// Input Linked List : |10|->|20|->|30|->|40|->|50|
// Output            : 30
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

// Function to insert node at first position
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

void DisplayAtPosition(PNODE Head, int pos)     // Function to display element at given position
{
    int iCnt = 1;

    if(pos <= 0)
    {
        printf("Invalid position\n");
        return;
    }

    while(Head != NULL)
    {
        if(iCnt == pos)
        {
            printf("Element at position %d is: %d\n", pos, Head->Data);
            return;
        }
        iCnt++;
        Head = Head->Next;
    }

    printf("Position out of range\n");
}

void Display(PNODE Head)                    // Function to display linked list
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
    int iPos = 0;

    InsertFirst(&First, 50);
    InsertFirst(&First, 40);
    InsertFirst(&First, 30);
    InsertFirst(&First, 20);
    InsertFirst(&First, 10);

    printf("Linked list:\n");
    Display(First);

    iPos = 3;
    DisplayAtPosition(First, iPos);

    return 0;
}
