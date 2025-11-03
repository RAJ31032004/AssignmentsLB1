#include <stdio.h>                                   // For input output functions
/////////////////////////////////////////////////////////////////////////////////
//    Function Name :       SumOfFactors
//    Description :         To calculate sum of all factors of a given number.
//    Input :               Integer
//    Output :              Integer
//    Author :              Raj Samir Jadhav
//    Date :                22/10/2025
/////////////////////////////////////////////////////////////////////////////////
int SumOfFactors(int number) 
{
    int iSum = 0;                                        // Initialize the sum

    for (int i = 1; i <= number; i++) 
    {
       
        if (number % i == 0) 
        {
            iSum = iSum + i;                            // Add the factor to the sum
        }
    }
    
    return iSum;                                       // Return the total sum
}

int main(void) 
{
    int number;

    printf("Enter number : ");                           //   for input
    scanf("%d", &number);
    
    printf("%d\n", SumOfFactors(number));
    
    return 0;
}

/*
   Time Complexity : O(N)
*/