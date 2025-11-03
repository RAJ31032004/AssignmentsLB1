#include <stdio.h>                 // For Input Output
/////////////////////////////////////////////////////////////////////////////////////////////
//    Function Name :       CheckEvenOdd
//    Description :         Accepts an integer and checks whether it is even or odd            
//    Input :               Integer         
//    Output :              Displays "Even" or "Odd" 
//    Author :              Raj Samir Jadhav
//    Date :                20/10/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////
void CheckEvenOdd(int num)
{
    if ((num % 2) == 0)                             // Check if the number is divdesible by 2
    {  
        printf("%d is an Even number.\n", num);     // prints  if it's even        
    }
    else 
    {
        printf("%d is an Odd number.\n", num);       // prints if it's odd
    }
}

int main()
{
    int number;
    
    printf("Enter number: ");                         // Accept Value from users
    scanf("%d", &number);  
    
    CheckEvenOdd(number);                             // Function Call
    
    return 0;
}

/*
   Time Complexity : O(N)
*/