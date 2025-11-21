#include <stdio.h>
#include <stdlib.h>

////////////////////////////////////////////////////////////////////////////////
//    Function Name :       Difference
//    Description :         To get the difference btw maximum and minimum number.
//    Input :               Integer
//    Output :              Integer
//    Author :              Raj Samir Jadhav
//    Date :                17/11/2025
////////////////////////////////////////////////////////////////////

int Difference(int Arr[], int iLength)
{
    int iMax = Arr[0];                           // Store first element as max
    int iMin = Arr[0];                           // Store first element as min

    for(int i = 1; i < iLength; i++)             // Traverse the array
    {
        if(Arr[i] > iMax)                       // Check for larger value
            iMax = Arr[i];

        if(Arr[i] < iMin)                       // Check for smaller value
            iMin = Arr[i];
    }
    return iMax - iMin;                         // Return difference
}

int main()
{
    int iSize = 0, iRet = 0;
    int *p = NULL;                               // Pointer for dynamic array

    printf("Enter number of elements: ");
    scanf("%d", &iSize);

    p = (int *)malloc(iSize * sizeof(int));      // Allocate memory dynamically
    if(p == NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }

    printf("Enter %d elements:\n", iSize);        // Accept array elements
    for(int i = 0; i < iSize; i++)
    {
        printf("Element %d: ", i+1);
        scanf("%d", &p[i]);
    }
  
    iRet = Difference(p, iSize);            // Call function

    printf("Difference is %d\n", iRet);     // Print result 

    free(p);                                // Free allocated memory
    return 0;
}
