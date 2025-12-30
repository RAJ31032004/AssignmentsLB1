////////////////////////////////////////////////////////////////////////////////
// Problem Statement: Write a program which displays elements at even positions of Singly Linear Linked List.
// Input Linked List : |10|->|20|->|30|->|40|->|50|
// Output: 20 40
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

void InsertFirst(PPNODE Head, int no)       // FUNCTION TO INSERT NODE AT FIRST POSITION
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

void DisplayEvenPosition(PNODE Head)        // FUNCTION TO DISPLAY ELEMENTS AT EVEN POSITIONS
{
    int iPos = 1;

    while(Head != NULL)
    {
        if((iPos % 2) == 0)
        {
            printf("%d ", Head->Data);
        }
        iPos++;
        Head = Head->Next;
    }
    printf("\n");
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

    InsertFirst(&First, 50);
    InsertFirst(&First, 40);
    InsertFirst(&First, 30);
    InsertFirst(&First, 20);
    InsertFirst(&First, 10);

    printf("Linked list:\n");
    Display(First);

    printf("Elements at even positions:\n");
    DisplayEvenPosition(First);

    return 0;
}
