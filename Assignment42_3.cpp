//////////////////////////////////////////////////////////////////////////////
 // Problem Statement: Write a program which adds all the elements of singly linear linked list.
 // Input Linked List : |10|->|20|->|30|->|40|
 // Output : 100
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

int Addition(PNODE Head)            // FUNCTION TO ADD ALL ELEMENTS
{
    int iSum = 0;

    while(Head != NULL)
    {
        iSum = iSum + Head->Data;
        Head = Head->Next;
    }
    return iSum;
}

int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsertFirst(&First, 40);
    InsertFirst(&First, 30);
    InsertFirst(&First, 20);
    InsertFirst(&First, 10);

    iRet = Addition(First);

    cout << "Addition of all elements is : " << iRet << endl;

    return 0;
}
