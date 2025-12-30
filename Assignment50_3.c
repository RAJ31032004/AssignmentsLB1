////////////////////////////////////////////////////////////////////////////////
// Problem Statement: Write a program which checks whether singly linear
// linked list is sorted in ascending order or not.
// Input Linked List : |10|->|20|->|30|->|40|
// Output: TRUE
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

void InsertFirst(PPNODE Head, int no)             // FUNCTION TO INSERT NODE AT FIRST POSITION
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

BOOL CheckSorted(PNODE Head)                    // FUNCTION TO CHECK WHETHER LINKED LIST IS SORTED IN ASCENDING ORDER
{
    if(Head == NULL || Head->Next == NULL)
    {
        return TRUE;
    }

    while(Head->Next != NULL)
    {
        if(Head->Data > Head->Next->Data)
        {
            return FALSE;
        }
        Head = Head->Next;
    }
    return TRUE;
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
    BOOL bRet = FALSE;

    InsertFirst(&First, 40);
    InsertFirst(&First, 30);
    InsertFirst(&First, 20);
    InsertFirst(&First, 10);

    printf("Linked list:\n");
    Display(First);

    bRet = CheckSorted(First);

    if(bRet == TRUE)
    {
        printf("Linked list is sorted in ascending order\n");
    }
    else
    {
        printf("Linked list is not sorted in ascending order\n");
    }

    return 0;
}
