////////////////////////////////////////////////////////////////////////////////
//
// Problem Statement : Write a generic program to copy one array into another.
//
// Technique         : Generic programming using void pointer
//
// Input  : 10 20 30 40 50
// Output : 10 20 30 40 50
//
// Name : Raj Samir Jadhav
// Date : 10/01/2026
//
////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

////////////////////////////////////////////////////////////////////////////////
//
// Function Name : CopyArray
// Description   : Copies one generic array into another
// Input         : Source array address, Destination array address,
//                 Number of elements, Size of datatype
// Output        : Destination array filled with source elements
//
////////////////////////////////////////////////////////////////////////////////

void CopyArray(void *src, void *dest, int iSize, size_t size)
{
    int i = 0;
    char *s = (char *)src;
    char *d = (char *)dest;

    for(i = 0; i < iSize; i++)
    {
        *(d + (i * size)) = *(s + (i * size));
    }
}

////////////////////////////////////////////////////////////////////////////////
//
// Entry Point Function
//
////////////////////////////////////////////////////////////////////////////////

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int brr[5];

    float xrr[] = {10.5f, 20.3f, 30.7f};
    float yrr[3];

    int i = 0;

    CopyArray(arr, brr, 5, sizeof(int));

    printf("Copied Integer Array :\n");
    for(i = 0; i < 5; i++)
    {
        printf("%d ", brr[i]);
    }
    printf("\n");

    CopyArray(xrr, yrr, 3, sizeof(float));

    printf("Copied Float Array :\n");
    for(i = 0; i < 3; i++)
    {
        printf("%f ", yrr[i]);
    }
    printf("\n");

    return 0;
}

/*
    Time Complexity : O(N)
*/
