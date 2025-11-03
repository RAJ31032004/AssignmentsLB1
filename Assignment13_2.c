#include <stdio.h>

/////////////////////////////////////////////////////////////////////////////////
//    Function Name :       PrintEvenNumber
//    Description :         To print even numbers from 1 to a given limit.
//    Input :               Integer
//    Output :              Void
//    Author :              Raj Samir Jadhav
//    Date :                22/10/2025
/////////////////////////////////////////////////////////////////////////////////

void PrintEvenNumber(int limit) 
{

    for (int i = 2; i <= limit; i = i + 2)    // Loop from 2 up to the limit incerasing by 2 
    {
        printf("%d ", i);
    }
}

int main() 
{
    int limit;

    printf("Enter number : ");                 //   for input
    scanf("%d", &limit);
    
   PrintEvenNumber(limit);
    
    return 0;
}

/*
   Time Complexity : O(N)
*/