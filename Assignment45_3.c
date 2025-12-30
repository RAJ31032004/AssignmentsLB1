
////////////////////////////////////////////////////////////////////////////
// Problem Statement: Write a program which search last occurrence of particular element in singly linear linked list.
// Input Linked List : |10|->|20|->|30|->|30|->|50|->|30|->|70|
// Element to search : 30
// Output : 6
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

int LastOccur(PNODE Head, int No)                     // FUNCTION TO SEARCH LAST OCCURRENCE
{
    int iPos = 1;
    int iLast = 0;

    while(Head != NULL)
    {
        if(Head->Data == No)
        {
            iLast = iPos;
        }
        Head = Head->Next;
        iPos++;
    }
    return iLast;                                     // 0 if not found
}

int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsertFirst(&First, 70);
    InsertFirst(&First, 30);
    InsertFirst(&First, 50);
    InsertFirst(&First, 30);
    InsertFirst(&First, 20);
    InsertFirst(&First, 10);

    iRet = LastOccur(First, 30);

    if(iRet == 0)
    {
        printf("Element not found\n");
    }
    else
    {
        printf("Last occurrence at position : %d\n", iRet);
    }

    return 0;
}
