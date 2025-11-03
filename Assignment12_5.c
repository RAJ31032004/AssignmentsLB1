#include <stdio.h>
#include <stdbool.h>                                   // Header for the 'bool' type

////////////////////////////////////////////////////////////////////////////////
//    Function Name :       IsDivisibleByFive
//    Description :         To check if a given number is divisible by 5.
//    Input :               Integer
//    Output :              Boolean (true/false)
//    Author :              Raj Samir Jadhav
//    Date :                22/10/2025
/////////////////////////////////////////////////////////////////////////////////

bool IsDivisibleByFive(int number)               // Function to check divisibility by 5
{
    if (number % 5 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main(void) 
{
    int number;

    printf("Enter number : ");                           //   for input
    scanf("%d", &number);
    
    printf("%s\n", IsDivisibleByFive(number) ? "Yes" : "No");
    
    return 0;
}
/*
   Time Complexity : O(1)
*/