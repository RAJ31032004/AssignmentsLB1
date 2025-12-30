////////////////////////////////////////////////////////////////////////////////
// Problem Statement: Write a program which displays all elements of
// singly linear linked list that are divisible by 3.
// Input Linked List : |9|->|10|->|18|->|21|->|25|
// Output            : 9 18 21
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

void DisplayDivByThree(PNODE Head)          // Function to display elements divisible by 3
{
    while(Head != NULL)
    {
        if((Head->Data % 3) == 0)
        {
            printf("%d ", Head->Data);
        }
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

    InsertFirst(&First, 25);
    InsertFirst(&First, 21);
    InsertFirst(&First, 18);
    InsertFirst(&First, 10);
    InsertFirst(&First, 9);

    printf("Linked list:\n");
    Display(First);

    printf("Elements divisible by 3:\n");
    DisplayDivByThree(First);

    return 0;
}
