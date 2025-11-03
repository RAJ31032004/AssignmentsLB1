#include <stdio.h>                                                  // for input and output functions
///////////////////////////////////////////////////////////////////////////////////////////////
//    Function Name :       KilometerToMeter
//    Description :         To convert distance from kilometers to meters.
//    Input :               Integer
//    Output :              Integer
//    Author :              Raj Samir Jadhav
//    Date :                20/10/2025
///////////////////////////////////////////////////////////////////////////////////////////////

#define KM_TO_METER 1000

int KMtoMeter(int iNo)
{
    return iNo * KM_TO_METER; 
}

int main()
{
    int iValue = 0;                                                   // To store the kilometer input
    int iRet = 0;                                                     // To store the meter result

    printf("Enter distance: ");
    scanf("%d", &iValue); 

    iRet = KMtoMeter(iValue);

    printf("Distance in meter is %d\n", iRet);                        // Completing the final printf statement.

    return 0;
}

/*
   Time Complexity : O(1)
*/