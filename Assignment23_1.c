#include <stdio.h>
#include <stdlib.h>

////////////////////////////////////////////////////////////////////////////////
//    Function Name :       Check
//    Description :         To Check if number is present or not.
//    Input :               Integer
//    Output :              True or False
//    Author :              Raj Samir Jadhav
//    Date :                16/11/2025
////////////////////////////////////////////////////////////////////

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL Check(int Arr[], int iLength, int iNo)              // Function to check if number is present
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == iNo)                             // If match found
        {
            return TRUE;
        }
    }
    return FALSE;                                        // If not found
}

int main()
{
    int iSize = 0, iCnt = 0, iValue = 0;
    int *p = NULL;
    BOOL bRet = FALSE;

    printf("Enter number of elements : ");
    scanf("%d",&iSize);

    
    p = (int *)malloc(iSize * sizeof(int));             // Allocate memory

    if(p == NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }

    printf("Enter the elements : \n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&p[iCnt]);
    }

    printf("Enter the number to search : ");
    scanf("%d",&iValue);

    bRet = Check(p, iSize, iValue);          // Function Call

    if(bRet == TRUE)
    {
        printf("TRUE\n");                   // Number found
    }
    else
    {
        printf("FALSE\n");                  // Number not found
    }

    free(p);                                 // Free allocated memory
 
    return 0;
}
