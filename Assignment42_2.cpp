/////////////////////////////////////////////////////////////////////////////
// Problem Statement:
 // Write a program which search last occurrence of particular element in singly linear linked list.
 // Input Linked List : |10|->|20|->|30|->|40|->|30|->|70|
 // Input Element : 30
 // Output : 5
 // Name : Raj Samir Jadhav
 // Date : 29/12/2025
//////////////////////////////////////////////////////////////////////////////

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

int SearchLastOcc(PNODE Head, int no)            // FUNCTION TO SEARCH LAST OCCURRENCE                      
{
    int iPos = 1;
    int iLastPos = 0;

    while(Head != NULL)
    {
        if(Head->Data == no)
        {
            iLastPos = iPos;
        }
        Head = Head->Next;
        iPos++;
    }
    return iLastPos;
}

int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsertFirst(&First, 70);
    InsertFirst(&First, 30);
    InsertFirst(&First, 50);
    InsertFirst(&First, 40);
    InsertFirst(&First, 30);
    InsertFirst(&First, 20);
    InsertFirst(&First, 10);

    iRet = SearchLastOcc(First, 30);

    if(iRet == 0)
    {
        cout << "Element not found\n";
    }
    else
    {
        cout << "Last occurrence at position : " << iRet << endl;
    }

    return 0;
}
