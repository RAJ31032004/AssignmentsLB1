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

int DisplayPrime(PNODE Head)                        // FUNCTION TO DISPLAY PRIME NUMBERS
{
    int iNo = 0, iCnt = 0, i = 0;
    BOOL bFlag = TRUE;

    while(Head != NULL)
    {
        iNo = Head->Data;

        if(iNo <= 1)
        {
            Head = Head->Next;
            continue;
        }

        bFlag = TRUE;

        for(i = 2; i <= iNo / 2; i++)
        {
            if(iNo % i == 0)
            {
                bFlag = FALSE;
                break;
            }
        }

        if(bFlag == TRUE)
        {
            printf("%d\t", iNo);
            iCnt++;
        }

        Head = Head->Next;
    }
    return iCnt;                        // returns count of prime numbers
}

int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsertFirst(&First, 89);
    InsertFirst(&First, 22);
    InsertFirst(&First, 41);
    InsertFirst(&First, 17);
    InsertFirst(&First, 20);
    InsertFirst(&First, 11);

    printf("Prime numbers are : ");
    iRet = DisplayPrime(First);

    printf("\nCount of prime numbers : %d\n", iRet);

    return 0;
}
