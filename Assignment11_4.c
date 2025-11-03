#include <stdio.h>                                // For input output functions
#define INVALID_RANGE -1                          // Constant for invalid range return value

/////////////////////////////////////////////////////////////////////////////////
//    Function Name :       RangeSumEven
//    Description :         To calculate sum of even numbers from starting point to ending point.
//    Input :               Integer, Integer
//    Output :              Integer
//    Author :              Raj Samir Jadhav
//    Date :                21/10/2025
/////////////////////////////////////////////////////////////////////////////////

int RangeSumEven(int iStart, int iEnd)
{
    
    if (iStart > iEnd)                           // Check for invalid range
    {
        printf("Invalid range\n");
        return INVALID_RANGE;
    }
    
   
    if (iStart <= 0)                            // Check for "positive numbers only"
    {
        printf("Invalid range (must contain positive numbers only)\n");
        return INVALID_RANGE;
    }

    int iSum = 0;
    
    for (int i = iStart; i <= iEnd; i++)          // Loop to calculate the sum
    {
        if (i % 2 == 0)                          // Check if the number is even
        {
            iSum = iSum + i;
        }
    }
    
    return iSum;
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iRet = 0;            

    printf("Enter starting point: ");             // Input starting point
    scanf("%d", &iValue1);

    printf("Enter ending point: ");              // Input ending point
    scanf("%d", &iValue2);

    iRet = RangeSumEven(iValue1, iValue2);

    if (iRet != INVALID_RANGE)
    {
        printf("Addition is %d\n", iRet);
    }
    
    return 0;
}

/*
   Time Complexity : O(N)
*/