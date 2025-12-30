//////////////////////////////////////////////////////////////////////////////
 // Problem Statement: Write a program which displays all even elements from singly linear linked list.
 // Input Linked List : |11|->|28|->|17|->|6|->|89|->|41|
 // Output :  28 6
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

void DisplayEven(PNODE Head)                // FUNCTION TO DISPLAY EVEN ELEMENTS
{
    while(Head != NULL)
    {
        if((Head->Data % 2) == 0)
        {
            printf("%d\t", Head->Data);
        }
        Head = Head->Next;
    }
}

int main()
{
    PNODE First = NULL;

    InsertFirst(&First, 41);
    InsertFirst(&First, 32);
    InsertFirst(&First, 20);
    InsertFirst(&First, 11);
    InsertFirst(&First, 10);

    printf("Even elements are : ");
    DisplayEven(First);

    return 0;
}
