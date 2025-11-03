#include <stdio.h>                                        // For input output functions

/////////////////////////////////////////////////////////////////////////////////
//    Function Name :       RangeDisplayEven
//    Description :         To display even numbers from starting point to ending point.
//    Input :               Integer, Integer
//    Output :              Void
//    Author :              Raj Samir Jadhav
//    Date :                21/10/2025
/////////////////////////////////////////////////////////////////////////////////

void RangeDisplayEven(int iStart, int iEnd)
{
    if (iStart > iEnd)                                       // Check for invalid range
    {
        printf("Invalid range\n");
        return;
    }

    for (int i = iStart; i <= iEnd; i++)
    {
        if (i % 2 == 0)                                       // Check if the number is even
        {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter starting point: ");                           // Input starting point
    scanf("%d", &iValue1);

    printf("Enter ending point: ");                             // Input ending point
    scanf("%d", &iValue2);

    RangeDisplayEven(iValue1, iValue2);

    return 0;
}


/*
   Time Complexity : O(N)
*/