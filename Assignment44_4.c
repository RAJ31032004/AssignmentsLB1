//////////////////////////////////////////////////////////////////////////////
// Problem Statement: Write a program which counts frequency of particular element in singly linear linked list.
 // Input Linked List : |10|->|20|->|30|->|20|->|40|->|20|
 // Input Element : 20
 // Output :  3
 // Name : Raj Samir Jadhav
 // Date : 29/12/2025
 /////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

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

int Frequency(PNODE Head, int No)     // FUNCTION TO COUNT FREQUENCY OF ELEMENT
{
    int iCnt = 0;

    while(Head != NULL)
    {
        if(Head->Data == No)
        {
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

    InsertFirst(&First, 70);
    InsertFirst(&First, 30);
    InsertFirst(&First, 50);
    InsertFirst(&First, 30);
    InsertFirst(&First, 20);
    InsertFirst(&First, 10);

    iRet = Frequency(First, 30);

    printf("Frequency of given number is : %d\n", iRet);

    return 0;
}
