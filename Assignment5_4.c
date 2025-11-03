#include <stdio.h>                                            // For Input Output
/////////////////////////////////////////////////////////////////////////////////////////////
//    Function Name :       CheckNumberType
//    Description :         checks whether it is positive, negative or zero
//    Input :               Integer
//    Output :              Displays "Positive", "Negative" or "Zero"
//    Author :              Raj Samir Jadhav
//    Date :                20/10/2025
/////////////////////////////////////////////////////////////////////////////////////////////

void CheckNumberType(int num)
{
    if (num > 0)                                                  // Check if the number is positive
    {
        printf("%d is a Positive number.\n", num);
    }
    else if (num < 0)                                             // Check if the number is negative
    {
        printf("%d is a Negative number.\n", num);
    }
    else 
    {
        printf("The number is Zero.\n");
    }
}

int main()
{
    int number;
    
    printf("Enter number: ");                                        // Accept Value from users
    scanf("%d", &number);
    
    CheckNumberType(number);                                         // Function Call
    
    return 0;
}


/*
   Time Complexity : O(N)
*/