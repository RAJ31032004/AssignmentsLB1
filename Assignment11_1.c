#include <stdio.h>                                          // For input output functions

/////////////////////////////////////////////////////////////////////////////////
//    Function Name :       RangeDisplay
//    Description :         To display numbers from starting point to ending point.
//    Input :               Integer, Integer
//    Output :              Void
//    Author :              Raj Samir Jadhav
//    Date :                21/10/2025
/////////////////////////////////////////////////////////////////////////////////

void RangeDisplay(int iStart, int iEnd)
{
    if (iStart > iEnd)                                          // Check for invalid range
    {
        printf("Invalid range\n");
        return;
    }

    for (int i = iStart; i <= iEnd; i++)                         // Loop from start to end
    {
        printf("%d ", i);
    }
    printf("\n");
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter starting point: ");
    scanf("%d", &iValue1);

    printf("Enter ending point: ");
    scanf("%d", &iValue2);

    RangeDisplay(iValue1, iValue2);

    return 0;
}

/*
   Time Complexity : O(N)
*/