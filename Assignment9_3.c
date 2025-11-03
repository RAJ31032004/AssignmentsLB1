#include <stdio.h>                                            // for input and output functions
#include <stdlib.h>                                           // for abs() function

//////////////////////////////////////////////////////////////////////////////////////////////
//    Function Name :       EvenFactorial   
//    Description :         To calculate even factorial of given number.
//    Input :               Integer
//    Output :              Integer
//    Author :              Raj Samir Jadhav
//    Date :                20/10/2025
//////////////////////////////////////////////////////////////////////////////////////////////

int EvenFactorial(int iNo)
{
    int iNum = abs(iNo);
    
    int iFact = 1;
    
    int iStart = iNum - (iNum % 2 != 0);                       // Determine the largest even number iNum.

    if (iNum < 2)                   
    {
        return 1;
    }

    for (int i = iStart; i >= 2; i = i - 2)                     // Loop from iStart down to 2, decrementing by 2 each time.
    {
        iFact = iFact * i;
    }
    
    return iFact;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number: ");                                       //takes value from user
    scanf("%d", &iValue);

    iRet = EvenFactorial(iValue);

    printf("Even Factorial of number is %d\n", iRet);

    return 0;
}

/*
   Time Complexity : O(N)
*/