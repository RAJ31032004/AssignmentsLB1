#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name :   SumEven
//  Description   :   Generic function to calculate sum of all even elements
//  Input         :   Pointer to array, number of elements, size of one element
//  Output        :   Sum of even elements
//  Author        :   Raj Samir Jadhav
//  Date          :   11/01/2026
//
/////////////////////////////////////////////////////////////////////////////////////////////

long long SumEven(void *Arr, int iSize, int iElementSize)
{
    int iCnt = 0;
    long long iSum = 0;
    long long iTemp = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        // Copy element into temporary variable
        memcpy(&iTemp, (char *)Arr + (iCnt * iElementSize), iElementSize);

        // Check even
        if((iTemp % 2) == 0)
        {
            iSum = iSum + iTemp;
        }
    }
    return iSum;
}

/////////////////////////////////////////////////////////////////////////////////////////////
//
//  Entry Point Function
//
/////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int Arr[] = {10, 15, 20, 25, 30};
    long long iRet = 0;

    iRet = SumEven(Arr, 5, sizeof(int));

    printf("Sum of even elements is : %lld\n", iRet);

    return 0;
}
