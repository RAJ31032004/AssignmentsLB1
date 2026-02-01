////////////////////////////////////////////////////////////////////////////////
//
// Problem Statement : Write a generic program to accept N values from user
//                     and return addition of values.
//
// Technique         : Generic programming using void pointer
//
// Name : Raj Samir Jadhav
// Date : 10/01/2026
//
////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

////////////////////////////////////////////////////////////////////////////////
//
// Function Name : AddInt
// Description   : Adds two integer values
//
////////////////////////////////////////////////////////////////////////////////

void AddInt(void *sum, void *value)
{
    *(int *)sum = *(int *)sum + *(int *)value;
}

////////////////////////////////////////////////////////////////////////////////
//
// Function Name : AddFloat
// Description   : Adds two float values
//
////////////////////////////////////////////////////////////////////////////////

void AddFloat(void *sum, void *value)
{
    *(float *)sum = *(float *)sum + *(float *)value;
}

////////////////////////////////////////////////////////////////////////////////
//
// Function Name : AddN
// Description   : Returns addition of N generic values
// Input         : Array address, size, initial sum,
//                 addition function
// Output        : Final sum
//
////////////////////////////////////////////////////////////////////////////////

void AddN(void *arr, int iSize, size_t size, void *sum,
          void (*Add)(void *, void *))
{
    int i = 0;
    char *ptr = (char *)arr;

    for(i = 0; i < iSize; i++)
    {
        Add(sum, ptr + (i * size));
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
    float brr[] = {10.0f, 3.7f, 9.8f, 8.7f};

    int iSum = 0;
    float fSum = 0.0f;

    AddN(arr, 5, sizeof(int), &iSum, AddInt);
    printf("Integer Sum : %d\n", iSum);

    AddN(brr, 4, sizeof(float), &fSum, AddFloat);
    printf("Float Sum   : %f\n", fSum);

    return 0;
}

/*
    Time Complexity : O(N)
*/
