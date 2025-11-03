#include <stdio.h>                                                // For Input Output

/////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name :       NonFactors
//    Description :         Takes input and displays all its non factors
//    Input :               Integer
//    Output :              Integer
//    Author :              Raj Samir Jadhav
//    Date :                19/10/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////

void NonFactors(int iNo)                                            // Function to display non-factors of a number
{
    int i = 0;
    if (iNo <= 0)
    {
        printf("Invalid input\n");                                  // Handle invalid input
        return;
    }

    
    for (i = 1; i < iNo; i++)                                      
    {
        if ((iNo % i) != 0)
        {
            printf("%d\t", i); 
        }
    }
    
}

int main()
{
    int iValue = 0;
    
    printf("Enter number : \n");                                    // Accept Value from users
    scanf("%d", &iValue);
    
    NonFactors(iValue);
    
    return 0;
}



/*
   Time Complexity : O(N)
*/