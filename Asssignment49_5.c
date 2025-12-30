////////////////////////////////////////////////////////////////////////////////
// Problem Statement: Write a program which counts all two-digit elements of
// singly linear linked list.
// Input Linked List : |8|->|12|->|99|->|105|->|-45|
// Output: 3
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

int CountTwoDigit(PNODE Head)           // Function to count two-digit numbers
{
    int iCnt = 0;
    int iNo = 0;

    while(Head != NULL)
    {
        iNo = Head->Data;

        if(iNo < 0)                      // Handle negative numbers
        {
            iNo = -iNo;
        }

        if(iNo >= 10 && iNo <= 99)
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

    InsertFirst(&First, -45);
    InsertFirst(&First, 105);
    InsertFirst(&First, 99);
    InsertFirst(&First, 12);
    InsertFirst(&First, 8);

    printf("Linked list:\n");
    Display(First);

    iRet = CountTwoDigit(First);

    printf("Number of two-digit elements: %d\n", iRet);

    return 0;
}
