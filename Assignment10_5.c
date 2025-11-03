#include <stdio.h>                                                           // for input and output functions
///////////////////////////////////////////////////////////////////////////////////////////////
//    Function Name :       SquareMeter
//    Description :         To convert area from square feet to square meters.
//    Input :               Integer
//    Output :              Double
//    Author :              Raj Samir Jadhav
//    Date :                20/10/2025
///////////////////////////////////////////////////////////////////////////////////////////////
#define SQ_FT_TO_SQ_METER 0.0929

double SquareMeter(int iValue)
{
    return iValue * SQ_FT_TO_SQ_METER;                                          // A single multiplication operation.
}

int main()
{
    int iValue = 0;                                                              // To store the square feet input
    double dRet = 0.0;                                                           // To store the square meters result

    printf("Enter area in square feet: ");
    if (scanf("%d", &iValue) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    dRet = SquareMeter(iValue);

    printf("Area in square meter is %f\n", dRet);                                // Completing the final printf statement.

    return 0;
}
/*
   Time Complexity : O(1)
*/