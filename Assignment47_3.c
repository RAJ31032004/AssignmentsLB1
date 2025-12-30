////////////////////////////////////////////////////////////////////////////////
// Problem Statement: Write a program which calculates sum of digits of each
// element of singly linear linked list.
// Input Linked List : |123|->|45|->|6|
// Output: 6 9 6
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

void InsertFirst(PPNODE Head, int no)        // FUNCTION TO INSERT NODE AT FIRST POSITION
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

void SumDigits(PNODE Head)              // FUNCTION TO CALCULATE SUM OF DIGITS OF EACH ELEMENT
{
    int iNo = 0;
    int iSum = 0;

    while(Head != NULL)
    {
        iNo = Head->Data;
        iSum = 0;

        if(iNo < 0)          // Handle negative numbers
        {
            iNo = -iNo;
        }

        while(iNo != 0)
        {
            iSum = iSum + (iNo % 10);
            iNo = iNo / 10;
        }

        printf("%d ", iSum);
        Head = Head->Next;
    }
    printf("\n");
}

void Display(PNODE Head)         // Function to display the linked list
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

    InsertFirst(&First, 6);
    InsertFirst(&First, 45);
    InsertFirst(&First, 123);

    printf("Linked list:\n");
    Display(First);

    printf("Sum of digits of each node:\n");
    SumDigits(First);

    return 0;
}
