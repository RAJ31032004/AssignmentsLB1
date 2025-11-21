#include <stdio.h>
#include <stdlib.h>

////////////////////////////////////////////////////////////////////////////////
//    Function Name :       Digits
//    Description :         To display the number having exactly 3 digits
//    Input :               Integer
//    Output :              Integer
//    Author :              Raj Samir Jadhav
//    Date :                17/11/2025
////////////////////////////////////////////////////////////////////

void Digits(int Arr[], int iLength)                      // Function to display numbers having exactly 3 digits
{
    for(int i = 0; i < iLength; i++)
    {
       
        if((Arr[i] >= 100 && Arr[i] <= 999) || (Arr[i] <= -100 && Arr[i] >= -999))          // Check if number has 3 digits (100 to 999 or -100 to -999)
        {
            printf("%d ", Arr[i]);                       // Print 3-digit number
        }
    }
}

int main()
{
    int iSize = 0;
    int *p = NULL;

    printf("Enter number of elements: ");
    scanf("%d", &iSize);

    p = (int *)malloc(iSize * sizeof(int));               // Allocate memory for array
    if(p == NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }

   
    printf("Enter %d elements:\n", iSize);                // Accept elements
    for(int i = 0; i < iSize; i++)
    {
        printf("Element %d: ", i + 1);
        scanf("%d", &p[i]);
    }

    Digits(p, iSize);                                    // Display 3-digit numbers

    free(p);                                            // Release memory
    return 0;
}
