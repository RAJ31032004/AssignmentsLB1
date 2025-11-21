#include <stdio.h>
#include <stdlib.h>

////////////////////////////////////////////////////////////////////////////////
//    Function Name :       FirstOcc
//    Description :         To Check First time occurence of number.
//    Input :               Integer
//    Output :              Integer
//    Author :              Raj Samir Jadhav
//    Date :                16/11/2025
////////////////////////////////////////////////////////////////////

int FirstOcc(int Arr[], int iLength, int iNo)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == iNo)                               // First time number matches
        {
            return iCnt;                                  // Return index
        }
    }
    return -1;                                            // If number not found
}

int main()
{
    int iSize = 0, iCnt = 0, iValue = 0;
    int *p = NULL;
    int iRet = 0;

    printf("Enter number of elements : ");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize * sizeof(int));                 // Allocate memory

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

    iRet = FirstOcc(p, iSize, iValue);                      // Function call

    printf("Index of first occurrence");
}