////////////////////////////////////////////////////////////////////////////////
//
// Problem Statement : Write a generic program to replace all occurrences
//                     of a value in an array.
//
// Technique         : Generic programming using void pointer
//
// Input  : 10 20 30 10 40 10
// OldVal : 10
// NewVal : 99
// Output : 99 20 30 99 40 99
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
// Function Name : Replace
// Description   : Replaces all occurrences of old value with new value
// Input         : Array address, size of array, size of datatype,
//                 old value address, new value address,
//                 comparison function
// Output        : Modified array
//
////////////////////////////////////////////////////////////////////////////////

void Replace(void *arr, int iSize, size_t size,
             void *oldVal, void *newVal,
             int (*Compare)(void *, void *))
{
    int i = 0;
    char *ptr = (char *)arr;

    for(i = 0; i < iSize; i++)
    {
        if(Compare(ptr + (i * size), oldVal) == 0)
        {
            // Copy newVal into array element
            int j = 0;
            char *src = (char *)newVal;
            char *dest = ptr + (i * size);

            for(j = 0; j < size; j++)
            {
                dest[j] = src[j];
            }
        }
    }
}

////////////////////////////////////////////////////////////////////////////////
//
// Entry Point Function
//
////////////////////////////////////////////////////////////////////////////////

int main()
{
    int arr[] = {10, 20, 30, 10, 40, 10};
    float brr[] = {1.1f, 2.2f, 1.1f, 3.3f};

    int oldI = 10, newI = 99;
    float oldF = 1.1f, newF = 9.9f;

    int i = 0;

    Replace(arr, 6, sizeof(int), &oldI, &newI, CompareInt);

    printf("Integer Array After Replace:\n");
    for(i = 0; i < 6; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    Replace(brr, 4, sizeof(float), &oldF, &newF, CompareFloat);

    printf("Float Array After Replace:\n");
    for(i = 0; i < 4; i++)
    {
        printf("%f ", brr[i]);
    }
    printf("\n");

    return 0;
}

/*
    Time Complexity : O(N)
*/
