/////////////////////////////////////////////////////////////////////////////////
// Problem Statement: Write a program which display all elements which are less than X from singly linear linked list.
// Input Linked List : |10|->|50|->|30|->|70|->|20|->|90|->|40|
// Input : 40
// Output : 10 30 20
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

void DisplayLess(PNODE Head, int X)             // FUNCTION TO DISPLAY ELEMENTS LESS THAN X
{
    while(Head != NULL)
    {
        if(Head->Data < X)
        {
            printf("%d\t", Head->Data);
        }
        Head = Head->Next;
    }
}

int main()
{
    PNODE First = NULL;

    InsertFirst(&First, 70);
    InsertFirst(&First, 30);
    InsertFirst(&First, 50);
    InsertFirst(&First, 90);
    InsertFirst(&First, 20);
    InsertFirst(&First, 10);

    printf("Elements less than X are : ");
    DisplayLess(First, 40);

    return 0;
}
