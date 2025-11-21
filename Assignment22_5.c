#include <stdio.h>
#include <stdlib.h>

////////////////////////////////////////////////////////////////////////////////
//    Function Name :       Frequency
//    Description :         To count frequency of given number in array
//    Input :               Integer
//    Output :              Integer
//    Author :              Raj Samir Jadhav
//    Date :                16/11/2025
////////////////////////////////////////////////////////////////////

int Frequency(int Arr[], int iLength, int iNo)            // Function to count frequency of given number in array 
{
    int iCnt = 0, iFreq = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)                // Traverse the array
    {
        if(Arr[iCnt] == iNo)                            // Check if element matches given number
        {
            iFreq++;                                    // Increase frequency count
        }
    }
    return iFreq;                                     // Return final frequency
}

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0, iValue = 0;
    int *p = NULL;

    printf("Enter number of elements: ");               // Accept number of elements
    scanf("%d", &iSize);

    printf("Enter the number: ");                        // Accept the number whose frequency is required
    scanf("%d", &iValue);

   
    p = (int *)malloc(iSize * sizeof(int));              // Allocate memory dynamically
    if(p == NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }

    printf("Enter %d elements:\n", iSize);              // Accept array elements
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element %d: ", iCnt + 1);
        scanf("%d", &p[iCnt]);
    }

    iRet = Frequency(p, iSize, iValue);                // Call function

    printf("Frequency of %d is: %d\n", iValue, iRet);  // Display result

    free(p);                                            // Free memory

    return 0;
}
