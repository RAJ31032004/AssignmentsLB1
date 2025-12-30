////////////////////////////////////////////////////////////////////////////////
// Problem Statement: Write a program which counts all prime elements of singly linear linked list.
// Input Linked List : |11|->|20|->|17|->|41|->|22|
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

void InsertFirst(PPNODE Head, int no)               // FUNCTION TO INSERT NODE AT FIRST POSITION
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

int IsPrime(int no)                             // FUNCTION TO CHECK WHETHER A NUMBER IS PRIME OR NOT
{
    int i = 0;

    if(no < 2)
    {
        return 0;
    }

    for(i = 2; i <= no / 2; i++)
    {
        if(no % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int CountPrime(PNODE Head)              // FUNCTION TO COUNT PRIME ELEMENTS IN THE LINKED LIST
{
    int iCnt = 0;

    while(Head != NULL)
    {
        if(IsPrime(Head->Data))
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

    InsertFirst(&First, 22);
    InsertFirst(&First, 41);
    InsertFirst(&First, 17);
    InsertFirst(&First, 20);
    InsertFirst(&First, 11);

    printf("Linked list:\n");
    Display(First);

    iRet = CountPrime(First);

    printf("Number of prime elements: %d\n", iRet);

    return 0;
}
