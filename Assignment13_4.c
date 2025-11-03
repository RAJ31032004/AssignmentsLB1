#include <stdio.h>

/////////////////////////////////////////////////////////////////////////////////
//    Function Name :       SumNaturalNumbers
//    Description :         To calculate sum of natural numbers from 1 to a given limit.
//    Input :               Integer
//    Output :              Integer
//    Author :              Raj Samir Jadhav
//    Date :                22/10/2025
/////////////////////////////////////////////////////////////////////////////////

int SumNaturalNumbers(int limit) 
{
    int iSum = 0;

    if (limit <= 0)                                            // Handle non-positive input
    {
        return 0;
    }

    for (int i = 1; i <= limit; i++)                          // Loop from 1 to limit
    {
        iSum = iSum + i; 
    }
    
    return iSum;
}

int main() 
{
    int limit;

    printf("Enter number : ");
    scanf("%d", &limit);
    
    printf("%d\n", SumNaturalNumbers(limit));
    
    return 0;
}

/*
   Time Complexity : O(N)
*/