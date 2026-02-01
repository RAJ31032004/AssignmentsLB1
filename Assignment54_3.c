#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name :   SumOdd
//  Description   :   Generic function to calculate sum of all odd elements
//  Input         :   Pointer to array, number of elements, size of one element
//  Output        :   Sum of odd elements
//  Author        :   Raj Samir Jadhav
//  Date          :   11/01/2026
//
/////////////////////////////////////////////////////////////////////////////////////////////

long long SumOdd(void *Arr, int iSize, int iElementSize)
{
    int iCnt = 0;
    long long iSum = 0;
    long long iTemp = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        // Copy each element into temporary variable
        memcpy(&iTemp, (char *)Arr + (iCnt * iElementSize), iElementSize);

        // Check odd condition
        if((iTemp % 2) != 0)
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
    int Arr[] = {10, 15, 20, 25, 30, 35};
    long long iRet = 0;

    iRet = SumOdd(Arr, 6, sizeof(int));

    printf("Sum of odd elements is : %lld\n", iRet);

    return 0;
}
