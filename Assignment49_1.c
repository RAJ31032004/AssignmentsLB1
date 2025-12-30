////////////////////////////////////////////////////////////////////////////////
// Problem Statement: Write a program which finds the difference between
// maximum and minimum element of singly linear linked list.
// Input Linked List : |10|->|20|->|30|->|5|
// Output: 25
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

int Difference(PNODE Head)                  // Function to find difference between maximum and minimum
{
    int iMax = 0;
    int iMin = 0;

    if(Head == NULL)
    {
        return 0;
    }

    iMax = Head->Data;
    iMin = Head->Data;

    while(Head != NULL)
    {
        if(Head->Data > iMax)
        {
            iMax = Head->Data;
        }

        if(Head->Data < iMin)
        {
            iMin = Head->Data;
        }

        Head = Head->Next;
    }

    return (iMax - iMin);
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
    int iRet = 0;

    InsertFirst(&First, 5);
    InsertFirst(&First, 30);
    InsertFirst(&First, 20);
    InsertFirst(&First, 10);

    printf("Linked list:\n");
    Display(First);

    iRet = Difference(First);

    printf("Difference between maximum and minimum: %d\n", iRet);

    return 0;
}
