////////////////////////////////////////////////////////////////////////////////
//
// Problem Statement : Write a generic program to find largest number
//                     from three numbers.
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
// Function Name : CompareInt
// Description   : Compares two integer values
// Input         : Address of two integers
// Output        : Positive / Negative / Zero
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
// Input         : Address of two floats
// Output        : Comparison result
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
// Function Name : Max
// Description   : Finds largest value among three generic values
// Input         : Address of three values, comparison function
// Output        : Address of largest value
//
////////////////////////////////////////////////////////////////////////////////

void * Max(void *a, void *b, void *c,
           int (*Compare)(void *, void *))
{
    void *max = a;

    if(Compare(b, max) > 0)
    {
        max = b;
    }
    if(Compare(c, max) > 0)
    {
        max = c;
    }

    return max;
}

////////////////////////////////////////////////////////////////////////////////
//
// Entry Point Function
//
////////////////////////////////////////////////////////////////////////////////

int main()
{
    int i1 = 10, i2 = 20, i3 = 30;
    float f1 = 10.5f, f2 = 20.3f, f3 = 5.4f;

    int *iMax = (int *)Max(&i1, &i2, &i3, CompareInt);
    printf("Largest Integer : %d\n", *iMax);

    float *fMax = (float *)Max(&f1, &f2, &f3, CompareFloat);
    printf("Largest Float   : %f\n", *fMax);

    return 0;
}

/*
    Time Complexity : O(1)
*/
