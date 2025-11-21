#include <stdio.h>
#include <stdlib.h>

/////////////////////////////////////////////////////////////////////////////////
//    Function Name :       Frequency
//    Description :         To caculate frequency btw even and odd integer
//    Input :               Integer
//    Output :              Integer
//    Author :              Raj Samir Jadhav
//    Date :                16/11/2025
////////////////////////////////////////////////////////////////////

int Frequency(int Arr[], int iLength)                         // Function to calculate difference between frequency of even and odd numbers
{
    int iCnt = 0;
    int iEven = 0, iOdd = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] % 2 == 0)                                // If number is even
        {
            iEven++;
        }
        else                                                 // If number is odd
        {
            iOdd++;
        }
    }

    
    return iEven - iOdd;
}

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0;
    int *p = NULL;

    
    printf("Enter number of elements: ");                   // Ask user for number of elements
    scanf("%d", &iSize);

    p = (int *)malloc(iSize * sizeof(int));                // Allocate memory

    if(p == NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }

    
    printf("Enter %d elements:\n", iSize);
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element %d: ", iCnt + 1);
        scanf("%d", &p[iCnt]);
    }

    iRet = Frequency(p, iSize);                                 // Function call


    printf("Difference (Even - Odd) = %d\n", iRet);

    
    free(p);                                                    // Free allocated memory

    return 0;
}
