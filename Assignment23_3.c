#include <stdio.h>
#include <stdlib.h>

////////////////////////////////////////////////////////////////////////////////
//    Function Name :       LastOcc
//    Description :         To Check Last occurence of index.
//    Input :               Integer
//    Output :              Integer
//    Author :              Raj Samir Jadhav
//    Date :                16/11/2025
////////////////////////////////////////////////////////////////////

int LastOcc(int Arr[], int iLength, int iNo)                 // Function to return last occurrence index
{
    int iCnt = 0;
    int iPos = -1;                                          // Default: Not found

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            iPos = iCnt;                                   // Update every time the number matches
        }
    }
    return iPos;                                           // Returns last matched index or -1
}

int main()
{
    int iSize = 0, iCnt = 0, iValue = 0;
    int *p = NULL;
    int iRet = 0;

    printf("Enter number of elements : ");
    scanf("%d",&iSize);

                                           
    p = (int *)malloc(iSize * sizeof(int));                // Allocate memory

    if(p == NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }

    printf("Enter %d elements : \n", iSize);
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&p[iCnt]);
    }

    printf("Enter the number to search : ");
    scanf("%d",&iValue);

    iRet = LastOcc(p, iSize, iValue);                        // Call to function

    printf("Index of last occurrence : %d\n", iRet);

    free(p);
    return 0;
}
