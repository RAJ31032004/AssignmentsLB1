#include <stdio.h>
#include <stdlib.h>

////////////////////////////////////////////////////////////////////////////////
//    Function Name :       Display
//    Description :         Display such number which are  divisible by 3 and 5.
//    Input :               Integer
//    Output :              Integer
//    Author :              Raj Samir Jadhav
//    Date :                17/11/2025
////////////////////////////////////////////////////////////////////

void Display(int Arr[], int iLength)
{
    for(int i = 0; i < iLength; i++)
    {
        if((Arr[i] % 3 == 0) && (Arr[i] % 5 == 0))   // divisible by 3 & 5
        {
            printf("%d\t", Arr[i]);
        }
    }
}

int main()
{
    int iSize = 0;
    int *p = NULL;

    printf("Enter number of elements: ");
    scanf("%d", &iSize);

    p = (int *)malloc(iSize * sizeof(int));       // allocate memory

    if(p == NULL)                                // memory check
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

    Display(p, iSize);                          // call function

    free(p);                                   // release memory

    return 0;
}
