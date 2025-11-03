#include<stdio.h>                                                 // for input output
/////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name :       DisplayevenFactor
//    Description :         It takes value from the user and prints only the even integer.          
//    Input :               Integer
//    Output :              Prints even integer
//    Author :              Raj Samir Jadhav
//    Date :                18/10/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////

void DisplayEvenFactor(int iNo)                                   // Function
{
    int i = 0;

    if(iNo <= 0)
    {
        iNo = -iNo;                                                 // To handle negative input
    }

    // Loop through numbers from 1 up to half of iNo (iNo/2)
    for(i = 1; i <= iNo / 2; i++) 
    {
        // Check 1: Must be a factor (iNo % i == 0)
        // Check 2: Must be an even number (i % 2 == 0)
        if((iNo % i == 0) && (i % 2 == 0)) 
        {
            printf("%d\t", i);
        }
    }
    printf("\n"); // Optional: for clean output
}

int main()
{
    int iValue = 0;

    printf("Enter number\n");                                // Take value from user
    scanf("%d", &iValue);

     DisplayEvenFactor(iValue);                             // Function

    return 0;
}


/*
   Time Complexity : O(N)
*/