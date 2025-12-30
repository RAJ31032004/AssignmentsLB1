 ////////////////////////////////////////////////////////////////////////////////
 // Problem Statement:Write a program which returns largest element from singly linear linked list.
 // Input Linked List : |110|->|230|->|320|->|240|
 // Output : 320
 // Name : Raj Samir Jadhav
 // Date : 29/12/2025
 ////////////////////////////////////////////////////////////////////////////////

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

int Maximum(PNODE Head)             // FUNCTION TO RETURN MAXIMUM ELEMENT
{
    int iMax = 0;

    if(Head == NULL)
    {
        return -1;
    }

    iMax = Head->Data;

    while(Head != NULL)
    {
        if(Head->Data > iMax)
        {
            iMax = Head->Data;
        }
        Head = Head->Next;
    }
    return iMax;
}

int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsertFirst(&First, 240);
    InsertFirst(&First, 320);
    InsertFirst(&First, 230);
    InsertFirst(&First, 110);

    iRet = Maximum(First);

    cout << "Largest element is : " << iRet << endl;

    return 0;
}
