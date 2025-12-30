////////////////////////////////////////////////////////////////////////////////
 // Problem Statement: Write a program which returns addition of all even elements from singly linear linked list.
 // Input Linked List : |11|->|20|->|32|->|41|
 // Output : 52
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

int AdditionEven(PNODE Head)            // FUNCTION TO ADD EVEN ELEMENTS
{
    int iSum = 0;

    while(Head != NULL)
    {
        if((Head->Data % 2) == 0)
        {
            iSum = iSum + Head->Data;
        }
        Head = Head->Next;
    }
    return iSum;
}

int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsertFirst(&First, 41);
    InsertFirst(&First, 32);
    InsertFirst(&First, 20);
    InsertFirst(&First, 11);

    iRet = AdditionEven(First);

    printf("Addition of even elements is : %d\n", iRet);

    return 0;
}
