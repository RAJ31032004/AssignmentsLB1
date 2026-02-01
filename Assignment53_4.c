////////////////////////////////////////////////////////////////////////////////
//
// Problem Statement : Write a generic program to find second smallest element
//                     from N values.
//
// Technique         : Generic programming using void pointer
//
// Input  : 10 20 30 40 50
// Output : 20
//
// Input  : 10.0 3.7 9.8 8.7
// Output : 8.7
//
// Name : Raj Samir Jadhav
// Date : 10/01/2026
//
////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

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
// Function Name : SecondMin
// Description   : Returns second smallest element from N generic values
// Input         : Array address, size of array, size of datatype,
//                 comparison function
// Output        : Address of second smallest value
//
////////////////////////////////////////////////////////////////////////////////

void * SecondMin(void *arr, int iSize, size_t size,
                 int (*Compare)(void *, void *))
{
    int i = 0;
    char *ptr = (char *)arr;

    void *min = ptr;
    void *second = NULL;

    for(i = 1; i < iSize; i++)
    {
        if(Compare(ptr + (i * size), min) < 0)
        {
            second = min;
            min = ptr + (i * size);
        }
        else if((second == NULL) ||
                (Compare(ptr + (i * size), second) < 0 &&
                 Compare(ptr + (i * size), min) > 0))
        {
            second = ptr + (i * size);
        }
    }

    return second;
}

////////////////////////////////////////////////////////////////////////////////
//
// Entry Point Function
//
////////////////////////////////////////////////////////////////////////////////

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    float brr[] = {10.0f, 3.7f, 9.8f, 8.7f};

    int *iRet = (int *)SecondMin(arr, 5, sizeof(int), CompareInt);
    printf("%d\n", *iRet);        // Output : 20

    float *fRet = (float *)SecondMin(brr, 4, sizeof(float), CompareFloat);
    printf("%f\n", *fRet);        // Output : 8.700000

    return 0;
}

/*
    Time Complexity : O(N)
*/
