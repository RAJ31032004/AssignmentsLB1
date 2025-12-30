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

int FirstOccur(PNODE Head, int No)              // FUNCTION TO SEARCH FIRST OCCURRENCE  
{
    int iPos = 1;

    while(Head != NULL)
    {
        if(Head->Data == No)
        {
            return iPos;
        }
        Head = Head->Next;
        iPos++;
    }
    return 0;                                 // Not found
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

    iRet = FirstOccur(First, 30);

    if(iRet == 0)
    {
        printf("Element not found\n");
    }
    else
    {
        printf("First occurrence at position : %d\n", iRet);
    }

    return 0;
}
