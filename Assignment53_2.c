////////////////////////////////////////////////////////////////////////////////
//
// Problem Statement : Write a generic program to check whether array
//                     is sorted or not.
//
// Technique         : Generic programming using void pointer
//
// Input  : 10 20 30 40 50
// Output : TRUE
//
// Input  : 10 30 20 40
// Output : FALSE
//
// Name : Raj Samir Jadhav
// Date : 10/01/2026
//
////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

#define TRUE  1
#define FALSE 0

////////////////////////////////////////////////////////////////////////////////
//
// Function Name : CompareInt
// Description   : Compares two integer values
//
////////////////////////////////////////////////////////////////////////////////

int CompareInt(void *p, void *q)
{
    return (*(int *)p - *(int *)q);
}

////////////////////////////////////////////////////////////////////////////////
//
// Function Name : CompareFloat
// Description   : Compares two float values
//
////////////////////////////////////////////////////////////////////////////////

int CompareFloat(void *p, void *q)
{
    float x = *(float *)p;
    float y = *(float *)q;

    if(x > y)
        return 1;
    else if(x < y)
        return -1;
    else
        return 0;
}

////////////////////////////////////////////////////////////////////////////////
//
// Function Name : CheckSorted
// Description   : Checks whether generic array is sorted (ascending order)
// Input         : Array address, size of array, size of datatype,
//                 comparison function
// Output        : TRUE or FALSE
//
////////////////////////////////////////////////////////////////////////////////

int CheckSorted(void *arr, int iSize, size_t size,
                int (*Compare)(void *, void *))
{
    int i = 0;
    char *ptr = (char *)arr;

    for(i = 0; i < iSize - 1; i++)
    {
        if(Compare(ptr + (i * size),
                   ptr + ((i + 1) * size)) > 0)
        {
            return FALSE;
        }
    }

    return TRUE;
}

////////////////////////////////////////////////////////////////////////////////
//
// Entry Point Function
//
////////////////////////////////////////////////////////////////////////////////

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    float brr[] = {1.1f, 2.3f, 4.5f, 7.8f};

    int iRet = 0;

    iRet = CheckSorted(arr, 5, sizeof(int), CompareInt);
    printf("Integer Array Sorted : %d\n", iRet);   // 1 (TRUE)

    iRet = CheckSorted(brr, 4, sizeof(float), CompareFloat);
    printf("Float Array Sorted   : %d\n", iRet);   // 1 (TRUE)

    return 0;
}

/*
    Time Complexity : O(N)
*/
