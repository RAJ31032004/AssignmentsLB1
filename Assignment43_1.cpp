///////////////////////////////////////////////////////////////////////////////
 // Problem Statement: Write a program which displays all perfect numbers from singly linear linked list.
 // Input Linked List : |11|->|28|->|17|->|6|->|89|->|41|
 // Output : 6 28
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

int DisplayPerfect(PNODE Head)              // FUNCTION TO DISPLAY PERFECT NUMBERS
{
    int iNo = 0, iSum = 0, iCnt = 0;

    while(Head != NULL)
    {
        iNo = Head->Data;
        iSum = 0;

        for(int i = 1; i <= iNo / 2; i++)
        {
            if(iNo % i == 0)
            {
                iSum = iSum + i;
            }
        }

        if(iSum == iNo)
        {
            cout << iNo << "\t";
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

    InsertFirst(&First, 89);
    InsertFirst(&First, 6);
    InsertFirst(&First, 41);
    InsertFirst(&First, 17);
    InsertFirst(&First, 28);
    InsertFirst(&First, 11);

    cout << "Perfect numbers are : ";
    iRet = DisplayPerfect(First);

    cout << "\nCount of perfect numbers : " << iRet << endl;

    return 0;
}
