#include <stdio.h>                                           // for input and output functions
#include <stdlib.h>                                          // for abs() function

int OddFactorial(int iNo)
{
    int iNum = abs(iNo);
    
    int iFact = 1;
    
    int iStart = iNum - (iNum % 2 == 0);                       // Determine the largest odd number iNum.
    
    if (iNum == 0)
    {
        return 1;
    }

    for (int i = iStart; i >= 1; i = i - 2)                     // Loop from iStart down to 1, decrementing by 2 each time.
    {
        iFact = iFact * i;
    }
    
    return iFact;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number: ");                                    //takes value from user
    scanf("%d", &iValue);

    iRet = OddFactorial(iValue);

    printf("Odd Factorial of number is %d\n", iRet);             // Display the result

    return 0;
}

/*
   Time Complexity : O(N)
*/