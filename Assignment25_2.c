#include <stdio.h>
#include <stdlib.h>

////////////////////////////////////////////////////////////////////////////////
//    Function Name :       Display
//    Description :         Display such number which are divisible by 5.
//    Input :               Integer
//    Output :              Integer
//    Author :              Raj Samir Jadhav
//    Date :                17/11/2025
////////////////////////////////////////////////////////////////////

void Display(int Arr[], int iLength)
{
    for(int i = 0; i < iLength; i++)
    {
        if(Arr[i] % 5 == 0)                // check divisible by 5
        {
            printf("%d ", Arr[i]);
        }
    }
}

int main()
{
    int iSize = 0, *p = NULL;

    printf("Enter number of elements: ");
    scanf("%d", &iSize);

    p = (int *)malloc(iSize * sizeof(int));   // allocate memory
    if(p == NULL)
    {
        printf("Memory allocation failed");
        return -1;
    }

    for(int i = 0; i < iSize; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &p[i]);                   // input array elements
    }

    Display(p, iSize);

    free(p);                                  // free memory
    return 0;
}
