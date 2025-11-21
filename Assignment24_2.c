#include <stdio.h>
#include <stdlib.h>

////////////////////////////////////////////////////////////////////////////////
//    Function Name :       Minimum
//    Description :         To get the minimum number.
//    Input :               Integer
//    Output :              Integer
//    Author :              Raj Samir Jadhav
//    Date :                17/11/2025
////////////////////////////////////////////////////////////////////


int Minimum(int Arr[], int iLength)
{
    int iMin = Arr[0];                     // assume first is min

    for(int i = 1; i < iLength; i++)
    {
        if(Arr[i] < iMin)                 // check smaller value
        {
            iMin = Arr[i];
        }
    }
    return iMin;
}

int main()
{
    int iSize = 0, iRet = 0;
    int *p = NULL;

    printf("Enter number of elements: ");
    scanf("%d", &iSize);

    p = (int *)malloc(iSize * sizeof(int));   // allocate memory

    if(p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter %d elements:\n", iSize);

    for(int i = 0; i < iSize; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &p[i]);
    }

    iRet = Minimum(p, iSize);                  // call function

    printf("Smallest Number is %d\n", iRet);

    free(p);
    return 0;
}
