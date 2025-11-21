#include <stdio.h>
#include <stdlib.h>

////////////////////////////////////////////////////////////////////////////////
//    Function Name :       Frequency
//    Description :         To count frequency of 11 in the array
//    Input :               Integer
//    Output :              Integer
//    Author :              Raj Samir Jadhav
//    Date :                16/11/2025
////////////////////////////////////////////////////////////////////

int Frequency(int Arr[], int iLength)                   // Function to count frequency of 11 in the array

{
    int iCnt = 0, iFreq = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)               // Traverse array
    {
        if(Arr[iCnt] == 11)                             // If element is 11
        {
            iFreq++;                                    // Increase count
        }
    }

    return iFreq;                                      // Return final frequency
}

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0;
    int *p = NULL;

    printf("Enter number of elements: ");               // Accept number of elements
    scanf("%d", &iSize);

    p = (int *)malloc(iSize * sizeof(int));              // Allocate memory dynamically
    if(p == NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }

    printf("Enter %d elements:\n", iSize);               // Accept array elements
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element %d: ", iCnt + 1);
        scanf("%d", &p[iCnt]);
    }

    iRet = Frequency(p, iSize);                             // Call function

    
    printf("Frequency of 11 is: %d\n", iRet);

    
    free(p);                                                   // Free memory

    return 0;
}
