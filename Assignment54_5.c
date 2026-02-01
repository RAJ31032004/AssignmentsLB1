#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name :   Min
//  Description   :   Generic function to find smallest element from array
//  Input         :   Pointer to array, number of elements, size of one element
//  Output        :   Smallest element
//  Author        :   Raj Samir Jadhav
//  Date          :   11/01/2026
//
/////////////////////////////////////////////////////////////////////////////////////////////

long long Min(void *Arr, int iSize, int iElementSize)
{
    int iCnt = 0;
    long long iMin = 0;
    long long iTemp = 0;

    memcpy(&iMin, Arr, iElementSize);                  // Copy first element as initial minimum

    for(iCnt = 1; iCnt < iSize; iCnt++)
    {
        memcpy(&iTemp, (char *)Arr + (iCnt * iElementSize), iElementSize);           // Copy current element into temp

        if(iTemp < iMin)
        {
            iMin = iTemp;
        }
    }
    return iMin;
}

/////////////////////////////////////////////////////////////////////////////////////////////
//
//  Entry Point Function
//
/////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int Arr[] = {50, 20, 10, 40, 30};
    long long iRet = 0;

    iRet = Min(Arr, 5, sizeof(int));

    printf("Smallest element is : %lld\n", iRet);

    return 0;
}
