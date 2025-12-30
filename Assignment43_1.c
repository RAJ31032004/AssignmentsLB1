 ////////////////////////////////////////////////////////////////////////////////
 // Problem Statement:
 // Write a program which displays all elements which are perfect from singly linear linked list.
 // Input Linked List : |11|->|6|->|41|->|17|->|28|->|89|
 // Output : 6 28
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

int DisplayPerfect(PNODE Head)                  // FUNCTION TO DISPLAY PERFECT NUMBERS
{
    int iNo = 0, iSum = 0, iCnt = 0, i = 0;

    while(Head != NULL)
    {
        iNo = Head->Data;
        iSum = 0;

        for(i = 1; i <= iNo / 2; i++)
        {
            if(iNo % i == 0)
            {
                iSum = iSum + i;
            }
        }

        if(iSum == iNo)
        {
            printf("%d\t", iNo);
            iCnt++;
        }

        Head = Head->Next;
    }
    return iCnt;                    // returns count of perfect numbers
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

    printf("Perfect numbers are : ");
    iRet = DisplayPerfect(First);

    printf("\nCount of perfect numbers : %d\n", iRet);

    return 0;
}
