#include <stdio.h>                                       // For input output functionss
#include <stdlib.h>                                      // For abs()

long long EvenFactorial(int iNum)
{
    long long iFact = 1;
    int iStart = iNum - (iNum % 2 != 0);                        // Start at iNum or iNum - 1

    if (iNum < 2) return 1;

    for (int i = iStart; i >= 2; i = i - 2)
    {
        iFact = iFact * i;
    }
    return iFact;
}

long long OddFactorial(int iNum)
{
    long long iFact = 1;
    int iStart = iNum - (iNum % 2 == 0);                             // Start at iNum or iNum - 1

    if (iNum == 0) return 1;

    for (int i = iStart; i >= 1; i = i - 2)
    {
        iFact = iFact * i;
    }
    return iFact;
}

long long FactorialDiff(int iNo)
{
    int iNum = abs(iNo);

    long long lEvenFact = EvenFactorial(iNum);             // Calculate both factorials 
    long long lOddFact = OddFactorial(iNum);
    
    return lEvenFact - lOddFact;                            // Calculate the difference
}

int main()
{
    int iValue = 0;
    long long lRet = 0; 

    printf("Enter number: ");
    scanf("%d", &iValue);

    lRet = FactorialDiff(iValue);

    printf("Factorial difference is %lld\n", lRet);

    return 0;
}

/*
   Time Complexity : O(N)
*/