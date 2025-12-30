////////////////////////////////////////////////////////////////////////////////
// Problem Statement: Write a program which displays all elements of
// singly linear linked list that are greater than the average of elements.
// Input Linked List : |10|->|20|->|30|->|40|
// Average: 25
// Output: 30 40
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

void InsertFirst(PPNODE Head, int no)           // Function to insert node at first position
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

void DisplayGreaterThanAvg(PNODE Head)          // Function to display elements greater than average
{
    int iSum = 0, iCnt = 0;
    float fAvg = 0.0;
    PNODE temp = Head;

   
    while(temp != NULL)                      // First traversal: calculate sum and count
    {
        iSum = iSum + temp->Data;
        iCnt++;
        temp = temp->Next;
    }

    if(iCnt == 0)
    {
        return;
    }

    fAvg = (float)iSum / iCnt;

    temp = Head;
    while(temp != NULL)
    {
        if(temp->Data > fAvg)
        {
            printf("%d ", temp->Data);
        }
        temp = temp->Next;
    }
    printf("\n");
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

    InsertFirst(&First, 40);
    InsertFirst(&First, 30);
    InsertFirst(&First, 20);
    InsertFirst(&First, 10);

    printf("Linked list:\n");
    Display(First);

    printf("Elements greater than average:\n");
    DisplayGreaterThanAvg(First);

    return 0;
}
