#include <stdio.h>
/////////////////////////////////////////////////////////////////////////////////
//    Function Name :       CountFactors
//    Description :         To count the number of factors of a given number.
//    Input :               Integer
//    Output :              Integer
//    Author :              Raj Samir Jadhav
//    Date :                22/10/2025      
/////////////////////////////////////////////////////////////////////////////////

int CountFactors(int number) 
{
    int iCnt = 0; 
                                   // Initialize factor count to 0
    if (number <= 0) 
    {
        return 0;
    }

    
    for (int i = 1; i <= number; i++) 
    {
        
        if (number % i == 0)          // Check if 'i' divides 'number' with no remainder
        {
            iCnt++;                   // Increment the factor count
        }
    }
    
    return iCnt;                      // Return the total count
}

int main() 
{
    int number;

    printf("Enter number : ");        // Prompt user for input
    scanf("%d", &number);
    
    printf("%d\n", CountFactors(number));

    return 0;
}

/*
   Time Complexity : O(N)
*/