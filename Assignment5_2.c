#include <stdio.h>                               // For Input Output

/////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name :       FindMaximum
//    Description :         displays the maximum of two numbers
//    Input :               Integer
//    Output :              Integer
//    Author :              Raj Samir Jadhav
//    Date :                19/10/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////

int FindMaximum(int a, int b)
{
    if (a > b)                                  //check whether a is greater than b
    {
        return a; 
    }
    else 
    {
        return b;                               //if b is greater than a return b
    }
}

int main()
{
    int num1, num2, result;
    
    printf("Enter two numbers: ");               // Accept Value from users
    scanf("%d %d", &num1, &num2);
    
    result = FindMaximum(num1, num2);             // Function Call
    
    printf("Maximum is: %d\n", result);
    
    return 0;
}


/*
   Time Complexity : O(1)
*/