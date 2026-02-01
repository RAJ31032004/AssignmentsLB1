////////////////////////////////////////////////////////////////////////////////
//
// Problem Statement : Write a generic program to accept N values and search
//                     first occurrence of any specific value.
//
// Input  : 10 20 30 10 30 40 10 40 10
// Value  : 40
// Output : 6
//
// Name : Raj Samir Jadhav
// Date : 10/01/2026
//
////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

////////////////////////////////////////////////////////////////////////////////
//
// Function Name : SearchFirstInt
// Description   : Searches first occurrence of integer value
// Input         : Integer array, Size, Value to search
// Output        : Position (1-based index)
//
////////////////////////////////////////////////////////////////////////////////

int SearchFirstInt(int *arr, int iSize, int iNo)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(arr[iCnt] == iNo)
        {
            return iCnt + 1;
        }
    }
    return -1;
}

////////////////////////////////////////////////////////////////////////////////
//
// Function Name : SearchFirstChar
// Description   : Searches first occurrence of character value
//
////////////////////////////////////////////////////////////////////////////////

int SearchFirstChar(char *arr, int iSize, char ch)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(arr[iCnt] == ch)
        {
            return iCnt + 1;
        }
    }
    return -1;
}

////////////////////////////////////////////////////////////////////////////////
//
// Function Name : SearchFirstFloat
// Description   : Searches first occurrence of float value
//
////////////////////////////////////////////////////////////////////////////////

int SearchFirstFloat(float *arr, int iSize, float fNo)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(arr[iCnt] == fNo)
        {
            return iCnt + 1;
        }
    }
    return -1;
}

////////////////////////////////////////////////////////////////////////////////
//
// Generic Macro
//
////////////////////////////////////////////////////////////////////////////////

#define SearchFirst(arr, size, value) _Generic((value), \
        int:   SearchFirstInt,                           \
        char:  SearchFirstChar,                          \
        float: SearchFirstFloat                          \
    )(arr, size, value)

////////////////////////////////////////////////////////////////////////////////
//
// Entry Point Function
//
////////////////////////////////////////////////////////////////////////////////

int main()
{
    int arr[] = {10,20,30,10,30,40,10,40,10};
    int iRet = 0;

    iRet = SearchFirst(arr, 9, 40);

    printf("%d\n", iRet);   // Output : 6

    return 0;
}

/*
    Time Complexity : O(N)
*/
