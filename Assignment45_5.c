///////////////////////////////////////////////////////////////////////////////
// Problem Statement: Write a program which counts frequency of elements less than X in singly linear linked
// Input Linked List : |10|->|50|->|30|->|70|->|20|->|90|->|40|
// Input : 40
// Output : 3
// Name : Raj Samir Jadhav  
// Date : 30/12/2025
//////////////////////////////////////////////////////////////////////////////
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

int CountLess(PNODE Head, int X)                // FUNCTION TO COUNT ELEMENTS LESS THAN X
{
    int iCnt = 0;

    while(Head != NULL)
    {
        if(Head->Data < X)
        {
            iCnt++;
        }
        Head = Head->Next;
    }
    return iCnt;
}

int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsertFirst(&First, 70);
    InsertFirst(&First, 30);
    InsertFirst(&First, 50);
    InsertFirst(&First, 90);
    InsertFirst(&First, 20);
    InsertFirst(&First, 10);

    iRet = CountLess(First, 40);

    printf("Count of elements less than X is : %d\n", iRet);

    return 0;
}
