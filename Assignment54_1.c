#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

/////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name :   Search
//  Description   :   Generic function to search an element in array
//  Input         :   Pointer to array, number of elements, size of one element, value to search
//  Output        :   TRUE if found, FALSE otherwise
//  Author        :   Raj Samir Jadhav
//  Date          :   11/01/2026
//
/////////////////////////////////////////////////////////////////////////////////////////////

BOOL Search(void *Arr, int iSize, int iElementSize, void *Value)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        // Compare each element with given value
        if(memcmp((char *)Arr + (iCnt * iElementSize), Value, iElementSize) == 0)
        {
            return TRUE;
        }
    }
    return FALSE;
}

/////////////////////////////////////////////////////////////////////////////////////////////
//
//  Entry Point Function
//
/////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int Arr[] = {10, 20, 30, 40, 50};
    int iSearch = 30;
    BOOL bRet = FALSE;

    bRet = Search(Arr, 5, sizeof(int), &iSearch);

    if(bRet == TRUE)
    {
        printf("Element is present in the array\n");
    }
    else
    {
        printf("Element is not present in the array\n");
    }

    return 0;
}
