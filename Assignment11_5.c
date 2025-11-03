#include <stdio.h>                                    // For input output functions

/////////////////////////////////////////////////////////////////////////////////
//    Function Name :       RangeDisplayReverse
//    Description :         To display numbers from starting point to ending point in reverse order.
//    Input :               Integer, Integer
//    Output :              Void
//    Author :              Raj Samir Jadhav
//    Date :                21/10/2025
/////////////////////////////////////////////////////////////////////////////////

void RangeDisplayReverse(int iStart, int iEnd)
{
    if (iStart > iEnd)                                // Check for invalid range
    {
        printf("Invalid range\n");
        return;
    }

    for (int i = iEnd; i >= iStart; i--)              // Loop from end to start
    {
        printf("%d ", i);
    }
    printf("\n");
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter starting point: ");                  // Input starting point
    scanf("%d", &iValue1);

    printf("Enter ending point: ");                    // Input ending point
    scanf("%d", &iValue2);

    RangeDisplayReverse(iValue1, iValue2);

    return 0;
}

/*
   Time Complexity : O(N)
*/