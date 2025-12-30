////////////////////////////////////////////////////////////////////////////////
// Problem Statement: Write a program which displays all prime elements of singly linear linked list.
// Input Linked List : |11|->|20|->|17|->|41|->|22|
// Output: 11 17 41
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

int IsPrime(int no)     // FUNCTION TO CHECK WHETHER A NUMBER IS PRIME OR NOT
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

void DisplayPrime(PNODE Head)       // FUNCTION TO DISPLAY PRIME ELEMENTS OF LINKED LIST
{
    while(Head != NULL)
    {
        if(IsPrime(Head->Data))
        {
            printf("%d ", Head->Data);
        }
        Head = Head->Next;
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

    InsertFirst(&First, 22);
    InsertFirst(&First, 41);
    InsertFirst(&First, 17);
    InsertFirst(&First, 20);
    InsertFirst(&First, 11);

    printf("Linked list:\n");
    Display(First);

    printf("Prime numbers in linked list:\n");
    DisplayPrime(First);

    return 0;
}
