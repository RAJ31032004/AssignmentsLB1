#include <stdio.h>
#include <stdlib.h>

////////////////////////////////////////////////////////////////////////////////
//    Function Name :       Display
//    Description :         Display such number which are Even and divisible by 5.
//    Input :               Integer
//    Output :              Integer
//    Author :              Raj Samir Jadhav
//    Date :                17/11/2025
////////////////////////////////////////////////////////////////////

void Display(int Arr[], int iLength)
{
    for(int i = 0; i < iLength; i++)
    {
        if((Arr[i] % 2 == 0) && (Arr[i] % 5 == 0))       // Function to check even and divisible by 5.
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

    p = (int *)malloc(iSize * sizeof(int));             // Memory Allocation

    if(p == NULL)
    {
        printf("Unable to allocate memory");           //If memory is not allocated
        return -1;
    }

    printf("Enter %d elements:\n", iSize);

    for(int i = 0; i < iSize; i++)
    {
        printf("Enter element %d: ", i + 1);           //To take element from user
        scanf("%d", &p[i]);
    }

    printf("Output:\n");
    Display(p, iSize);

    free(p);                                           //Free the memory

    return 0;
}
