#include <stdio.h>
#include <stdlib.h>

////////////////////////////////////////////////////////////////////////////////
//    Function Name :       Product
//    Description :         To get product of Odd numbers.
//    Input :               Integer
//    Output :              Integer
//    Author :              Raj Samir Jadhav
//    Date :                16/11/2025
////////////////////////////////////////////////////////////////////

int Product(int Arr[], int iLength)
{
    int iCnt = 0, iProd = 1;
    int bOddFound = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] % 2 != 0)                        // odd number check
        {
            iProd *= Arr[iCnt];
            bOddFound = 1;
        }
    }

    if(bOddFound == 0)                                 // no odd numbers
    {
        return 0;
    }

    return iProd;
}

int main()
{
    int iSize = 0, iCnt = 0, iRet = 0;
    int *p = NULL;

    printf("Enter number of elements : ");
    scanf("%d", &iSize);

    p = (int *)malloc(iSize * sizeof(int));               // allocate memory
    if(p == NULL)
    {
        printf("Memory allocation failed\n");
        return -1;
    }

    printf("Enter %d elements : \n", iSize);
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Element %d : ", iCnt+1);
        scanf("%d", &p[iCnt]);
    }

    iRet = Product(p, iSize);                             // call function
    printf("Product of odd elements : %d\n", iRet);

    free(p);                                              // release memory
    return 0;
}
