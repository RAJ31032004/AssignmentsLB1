////////////////////////////////////////////////////////////////////////////////
 // Problem Statement: Write a program which returns second maximum element from singly linear linked list.
 // Input Linked List : |11|->|28|->|17|->|6|->|89|->|41|
 // Output :  41
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

// FUNCTION TO RETURN SECOND MAXIMUM ELEMENT
int SecMaximum(PNODE Head)
{
    int iMax = 0;
    int iSecMax = 0;

    if(Head == NULL || Head->Next == NULL)
    {
        return -1;
    }

    iMax = Head->Data;
    iSecMax = Head->Data;

    while(Head != NULL)
    {
        if(Head->Data > iMax)
        {
            iSecMax = iMax;
            iMax = Head->Data;
        }
        else if((Head->Data > iSecMax) && (Head->Data != iMax))
        {
            iSecMax = Head->Data;
        }
        Head = Head->Next;
    }
    return iSecMax;
}

int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsertFirst(&First, 240);
    InsertFirst(&First, 320);
    InsertFirst(&First, 230);
    InsertFirst(&First, 110);

    iRet = SecMaximum(First);

    cout << "Second maximum element is : " << iRet << endl;

    return 0;
}
