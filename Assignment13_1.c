#include <stdio.h>
/////////////////////////////////////////////////////////////////////////////////
//    Function Name :       PrintNumbers
//    Description :         To print numbers from 1 to a given limit.
//    Input :               Integer
//    Output :              Void
//    Author :              Raj Samir Jadhav
//    Date :                22/10/2025
/////////////////////////////////////////////////////////////////////////////////

void PrintNumbers(int limit) 
{
    if (limit < 1) 
    {
        return;                          // Nothing to print
    }

    for (int i = 1; i <= limit; i++) 
    {
        printf("%d ", i);
    }
    printf("\n");                      // Add a newline for clean output
}

int main() 
{
    int limit;

    printf("Enter number : ");
    scanf("%d", &limit);               
    
    PrintNumbers(limit);
    
    return 0;
}

/*
   Time Complexity : O(N)
*/