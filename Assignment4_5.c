#include <stdio.h>                                    // For Input Output

////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name :       NonFactor
//    Description :         accept the value and display all the non factor of that integer
//    Input :               Integer
//    Output :              Integer
//    Author :              Raj Samir Jadhav
//    Date :                19/10/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////

void NonFactor(int iNo)
{
    int i = 0;
    
    if (iNo <= 0)
    {
        printf("Invalid input\n");
        return;
    }
    
        for (i = 1; i < iNo; i++)                     // Loop through all numbers from 1 to iNo - 1 
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
    
    printf("Enter number : \n");                      // Accept Value from users
    scanf("%d", &iValue);
    
    NonFactor(iValue);
    
    return 0;
}

/*
   Time Complexity : O(N)
*/