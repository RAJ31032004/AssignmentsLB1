#include <stdio.h>

/////////////////////////////////////////////////////////////////////////////////
//    Function Name :       SumOfEvenFactors
//    Description :         To calculate sum of all even factors of a given number excluding the number itself.
//    Input :               Integer
//    Output :              Integer
//    Author :              Raj Samir Jadhav
//    Date :                22/10/2025
/////////////////////////////////////////////////////////////////////////////////

int SumOfEvenFactors(int number) 
{
    int iSum = 0;                                   // Initialize the sum

    if (number <= 0) 
    {
        return 0;
    }

    for (int i = 1; i < number; i++) 
    {
        
        if ((number % i == 0) && (i % 2 == 0))    // Check if 'i' is an even factor
        {
            iSum = iSum + i;                      // Add the even factor to the sum
        }
    }
    
    return iSum;                                    // Return the total sum
}

int main() 
{
    int number;

    printf("Enter number : ");
    scanf("%d", &number);
    
    printf("%d\n", SumOfEvenFactors(number));
    
    return 0;
}

/*
   Time Complexity : O(N)
*/