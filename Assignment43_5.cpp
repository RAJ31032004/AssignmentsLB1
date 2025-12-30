///////////////////////////////////////////////////////////////////////////////
 // Problem Statement: Write a program which displays addition of digits of each element from singly linear linked list.
 // Input Linked List : |11|->|28|->|17|->|6|->|89|->|41|
 // Output :  2 10 8 6 17 5
 // Name : Raj Samir Jadhav
 // Date : 29/12/2025
 /////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

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

    newn = new NODE;

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

int SumDigit(PNODE Head)                // FUNCTION TO SUM DIGITS OF EACH ELEMENT
{
    int iNo = 0, iSum = 0;

    while(Head != NULL)
    {
        iNo = Head->Data;
        iSum = 0;

        while(iNo != 0)
        {
            iSum = iSum + (iNo % 10);
            iNo = iNo / 10;
        }

        cout << iSum << "\t";
        Head = Head->Next;
    }
    return 0;
}

int main()
{
    PNODE First = NULL;

    InsertFirst(&First, 640);
    InsertFirst(&First, 240);
    InsertFirst(&First, 20);
    InsertFirst(&First, 230);
    InsertFirst(&First, 110);

    cout << "Addition of digits of each element : ";
    SumDigit(First);

    return 0;
}
