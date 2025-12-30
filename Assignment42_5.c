 ////////////////////////////////////////////////////////////////////////////////
 // Problem Statement: Write a program which returns smallest element from singly linear linked list.
 // Input Linked List : |640|->|240|->|20|->|230|->|110|
 // Output : 20
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

    newn->Next = NULL;
    newn->Data = no;

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

// FUNCTION TO RETURN MINIMUM ELEMENT
int Minimum(PNODE Head)
{
    int iMin = 0;

    if(Head == NULL)
    {
        return -1;   // List is empty
    }

    iMin = Head->Data;

    while(Head != NULL)
    {
        if(Head->Data < iMin)
        {
            iMin = Head->Data;
        }
        Head = Head->Next;
    }
    return iMin;
}

int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsertFirst(&First, 640);
    InsertFirst(&First, 240);
    InsertFirst(&First, 20);
    InsertFirst(&First, 230);
    InsertFirst(&First, 110);

    iRet = Minimum(First);

    printf("Smallest element is : %d\n", iRet);

    return 0;
}
