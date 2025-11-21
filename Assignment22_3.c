#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>    

////////////////////////////////////////////////////////////////////////////////
//    Function Name :       Check
//    Description :         To check whether 11 is present or not
//    Input :               Integer
//    Output :              True or False
//    Author :              Raj Samir Jadhav
//    Date :                16/11/2025
////////////////////////////////////////////////////////////////////

bool Check(int Arr[], int iLength)                              // Function to check whether 11 is present in array
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)                       // Traverse all array elements
    {
        if(Arr[iCnt] == 11)                                     // If element is 11
        {
            return true;                                         // Immediately return true
        }
    }

    return false;                                                  // if 11 is not present
}

int main()
{
    int iSize = 0, iCnt = 0;
    int *p = NULL;
    bool bRet = false;

    printf("Enter number of elements: ");                          // Accept number of elements

    scanf("%d", &iSize);

    p = (int *)malloc(iSize * sizeof(int));                          // Allocate memory dynamically
    if(p == NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }

    printf("Enter %d elements:\n", iSize);                             // Accept elements
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element %d: ", iCnt + 1);
        scanf("%d", &p[iCnt]);
    }

    bRet = Check(p, iSize);                                           // Call function

    if(bRet == true)                                                  // Display result
    {
        printf("11 is present\n");
    }
    else
    {
        printf("11 is absent\n");
    }

   
    free(p);                                                          // Free memory

    return 0;
}
