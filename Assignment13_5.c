#include <stdio.h>

/////////////////////////////////////////////////////////////////////////////////
//    Function Name :       SumEvenNumbers
//    Description :         To calculate sum of even numbers from 1 to a given limit.
//    Input :               Integer
//    Output :              Long Long Integer
//    Author :              Raj Samir Jadhav
//    Date :                22/10/2025
/////////////////////////////////////////////////////////////////////////////////

long long  SumEvenNumbers(int limit) 
{
    long long iSum = 0;

    if (limit <= 0) 
    {
        return 0;
    }

    for (int i = 1; i <= limit; i++)               // Loop from 1 to limit
    {
        iSum = iSum + (2 * i);
    }
    
    return iSum;
}

int main(void) 
{
    int limit;
    long long lRet;

    printf("Enter number : ");                      //   for input
    scanf("%d", &limit);
    
    lRet =  SumEvenNumbers(limit);                 //  Call the function
    printf("%lld\n", lRet);
    
    return 0;
}

/*
   Time Complexity : O(N)
*/