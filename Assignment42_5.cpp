//////////////////////////////////////////////////////////////////////////////
 // Problem Statement: Write a program which returns smallest element from singly linear linked list.
 // Input Linked List : |640|->|240|->|20|->|230|->|110|
 // Output : 20
 // Name : Raj Samir Jadhav
 // Date : 29/12/2025
 /////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

#define TRUE 1
#define FALSE 

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

int Minimum(PNODE Head)                      // FUNCTION TO RETURN MINIMUM ELEMENT
{
    int iMin = 0;

    if(Head == NULL)
    {
        return -1;
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

    cout << "Smallest element is : " << iRet << endl;

    return 0;
}
