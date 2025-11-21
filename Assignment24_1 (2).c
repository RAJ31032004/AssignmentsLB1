#include <stdio.h>
#include <stdlib.h>

////////////////////////////////////////////////////////////////////////////////
//    Function Name :       Maximum
//    Description :         Display the largest number.
//    Input :               Integer
//    Output :              Integer
//    Author :              Raj Samir Jadhav
//    Date :                17/11/2025
////////////////////////////////////////////////////////////////////

int Maximum(int Arr[], int iLength)
{
    int iMax = Arr[0];                                // assume first is max
 
    for(int i = 1; i < iLength; i++)
    {
        if(Arr[i] > iMax)                            // check larger value
        {
            iMax = Arr[i];
        }
    }
    return iMax;
}

int main()
{
    int iSize = 0, iRet = 0;
    int *p = NULL;

    printf("Enter number of elements: ");
    scanf("%d", &iSize);

    p = (int *)malloc(iSize * sizeof(int));            // allocate memory

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

    iRet = Maximum(p, iSize);                         // call function

    printf("Largest Number is %d\n", iRet);

    free(p);
    return 0;
}
