#include <stdio.h>                                 // For input output functions

/////////////////////////////////////////////////////////////////////////////////
//    Function Name :       PrintOddNumbers
//    Description :         To print odd numbers from 1 to a given limit.
//    Input :               Integer
//    Output :              Void
//    Author :              Raj Samir Jadhav
//    Date :                22/10/2025
/////////////////////////////////////////////////////////////////////////////////

void PrintOddNumbers(int limit) 
{
    for (int i = 1; i <= limit; i = i + 2)               // Loop from 1 up to the limit increasing by 2
    {
        printf("%d ", i);
    }
}

int main() 
{
    int limit;

    printf("Enter number : ");                             //   for input
    scanf("%d", &limit);
    
     PrintOddNumbers(limit);
    
    return 0;           
}

/*
   Time Complexity : O(N)
*/