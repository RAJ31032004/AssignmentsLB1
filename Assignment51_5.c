////////////////////////////////////////////////////////////////////////////////
//
// Problem Statement : Write a generic program to accept N values and reverse
//                     the contents.
//
// Input  : 10 20 30 10 30 40 10 40 10
// Output : 10 40 10 40 30 10 30 20 10
//
// Name : Raj Samir Jadhav
// Date : 10/01/2026
//
////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

////////////////////////////////////////////////////////////////////////////////
//
// Function Name : ReverseInt
// Description   : Reverses integer array
// Input         : Integer array, Size
// Output        : Reversed array
//
////////////////////////////////////////////////////////////////////////////////

void ReverseInt(int *arr, int iSize)
{
    int iStart = 0;
    int iEnd = iSize - 1;
    int temp = 0;

    while(iStart < iEnd)
    {
        temp = arr[iStart];
        arr[iStart] = arr[iEnd];
        arr[iEnd] = temp;

        iStart++;
        iEnd--;
    }
}

////////////////////////////////////////////////////////////////////////////////
//
// Function Name : ReverseChar
// Description   : Reverses character array
//
////////////////////////////////////////////////////////////////////////////////

void ReverseChar(char *arr, int iSize)
{
    int iStart = 0;
    int iEnd = iSize - 1;
    char temp;

    while(iStart < iEnd)
    {
        temp = arr[iStart];
        arr[iStart] = arr[iEnd];
        arr[iEnd] = temp;

        iStart++;
        iEnd--;
    }
}

////////////////////////////////////////////////////////////////////////////////
//
// Function Name : ReverseFloat
// Description   : Reverses float array
//
////////////////////////////////////////////////////////////////////////////////

void ReverseFloat(float *arr, int iSize)
{
    int iStart = 0;
    int iEnd = iSize - 1;
    float temp;

    while(iStart < iEnd)
    {
        temp = arr[iStart];
        arr[iStart] = arr[iEnd];
        arr[iEnd] = temp;

        iStart++;
        iEnd--;
    }
}

////////////////////////////////////////////////////////////////////////////////
//
// Generic Macro
//
////////////////////////////////////////////////////////////////////////////////

#define Reverse(arr, size) _Generic((arr[0]), \
        int:   ReverseInt,                     \
        char:  ReverseChar,                    \
        float: ReverseFloat                    \
    )(arr, size)

////////////////////////////////////////////////////////////////////////////////
//
// Entry Point Function
//
////////////////////////////////////////////////////////////////////////////////

int main()
{
    int arr[] = {10,20,30,10,30,40,10,40,10};
    int iCnt = 0;

    printf("Before Reverse :\n");
    for(iCnt = 0; iCnt < 9; iCnt++)
    {
        printf("%d ", arr[iCnt]);
    }
    printf("\n");

    Reverse(arr, 9);

    printf("After Reverse :\n");
    for(iCnt = 0; iCnt < 9; iCnt++)
    {
        printf("%d ", arr[iCnt]);
    }
    printf("\n");

    return 0;
}

/*
    Time Complexity : O(N)
*/
