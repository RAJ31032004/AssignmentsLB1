#include <stdio.h>                         // For Input Output

/////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name :       CheckLeapYear
//    Description :         check whether it is leap year or not           
//    Input :               Integer
//    Output :              Displays "Leap Year" or "Not a Leap Year"
//    Author :              Raj Samir Jadhav
//    Date :                20/10/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////

void CheckLeapYear(int year)                                           // Function to check leap year
{
    if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))    // Check if the year is a leap year
    {
        printf("%d is a Leap Year.\n", year);
    }
    else
    {
        printf("%d is not a Leap Year.\n", year);
    }
}

int main()
{
    int yr;
    
    printf("Enter year: ");                      // Accept Value from users
    scanf("%d", &yr);
     
    CheckLeapYear(yr);                           // Function Call
    
    return 0;
}


/*
   Time Complexity : O(N)
*/