////////////////////////////////////////////////////////////////////////////////
//
// Problem Statement : Write a generic program to accept N values and count
//                     frequency of any specific value.
//
// Input  : 10 20 30 10 30 40 10 40 10
// Value  : 10
// Output : 4
//
// Name : Raj Samir Jadhav
// Date : 10/01/2026
//
////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

////////////////////////////////////////////////////////////////////////////////
//
// Function Name : FrequencyInt
// Description   : Counts frequency of integer value
// Input         : Integer array, Size, Value to search
// Output        : Frequency count
//
////////////////////////////////////////////////////////////////////////////////

int FrequencyInt(int *arr, int iSize, int iNo)
{
    int iCnt = 0;
    int iFreq = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(arr[iCnt] == iNo)
        {
            iFreq++;
        }
    }
    return iFreq;
}

////////////////////////////////////////////////////////////////////////////////
//
// Function Name : FrequencyChar
// Description   : Counts frequency of character value
//
////////////////////////////////////////////////////////////////////////////////

int FrequencyChar(char *arr, int iSize, char ch)
{
    int iCnt = 0;
    int iFreq = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(arr[iCnt] == ch)
        {
            iFreq++;
        }
    }
    return iFreq;
}

////////////////////////////////////////////////////////////////////////////////
//
// Function Name : FrequencyFloat
// Description   : Counts frequency of float value
//
////////////////////////////////////////////////////////////////////////////////

int FrequencyFloat(float *arr, int iSize, float fNo)
{
    int iCnt = 0;
    int iFreq = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(arr[iCnt] == fNo)
        {
            iFreq++;
        }
    }
    return iFreq;
}

////////////////////////////////////////////////////////////////////////////////
//
// Generic Macro
//
////////////////////////////////////////////////////////////////////////////////

#define Frequency(arr, size, value) _Generic((value), \
        int:   FrequencyInt,                           \
        char:  FrequencyChar,                          \
        float: FrequencyFloat                          \
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

    iRet = Frequency(arr, 9, 10);

    printf("%d\n", iRet);   // Output : 4

    return 0;
}

/*
    Time Complexity : O(N)
*/
