#include <stdio.h>                                  // For input output functions

/////////////////////////////////////////////////////////////////////////////////
//    Function Name :       print_factors
//    Description :         To print all factors of a given number.
//    Input :               Integer
//    Output :              Void
//    Author :              Raj Samir Jadhav
//    Date :                22/10/2025
/////////////////////////////////////////////////////////////////////////////////

void print_factors(int number) 
{
    if (number <= 0) 
    {
        printf("Please enter a positive number.\n");       // Validate input    
        return;
    }

    for (int i = 1; i <= number; i++)                       // Loop to find factors 
    {
        if (number % i == 0) 
        {
            printf("%d ", i);
        }
    }
}

int main() 
{
    int number;

    printf("Enter number : ");
    scanf("%d", &number);
    
    print_factors(number);

    return 0;
}

/*
   Time Complexity : O(N)
*/