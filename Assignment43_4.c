////////////////////////////////////////////////////////////////////////////////
// Problem Statement: Write a program which counts all elements of
// singly linear linked list that are divisible by 5.
// Input Linked List : |10|->|21|->|30|->|41|->|25|
// Output            : 3
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

void InsertFirst(PPNODE Head, int no)           // Function to insert node at first position
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

int CountDivByFive(PNODE Head)              // Function to count elements divisible by 5
{
    int iCnt = 0;

    while(Head != NULL)
    {
        if((Head->Data % 5) == 0)
        {
            iCnt++;
        }
        Head = Head->Next;
    }
    return iCnt;
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

    InsertFirst(&First, 25);
    InsertFirst(&First, 41);
    InsertFirst(&First, 30);
    InsertFirst(&First, 21);
    InsertFirst(&First, 10);

    printf("Linked list:\n");
    Display(First);

    iRet = CountDivByFive(First);

    printf("Number of elements divisible by 5: %d\n", iRet);

    return 0;
}
