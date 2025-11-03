#include <stdio.h>                            // for input and output functions

////////////////////////////////////////////////////////////////////////////////////////////
//    Function Name :       Pattern
//    Description :         To print the pattern '$ * ' for given number of times.
//    Input :               Integer
//    Output :              Void
//    Author :              Raj Samir Jadhav
//    Date :                20/10/2025
/////////////////////////////////////////////////////////////////////////////////////////////
void Pattern(int iNo)
{
    int iCnt = 0;

    if (iNo < 0)
    {
        iNo = -iNo;                                       // Convert negative input to positive
    }

    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("$ * ");
    }
    
}


int main()
{
    int iValue = 0;
    
    printf("Enter number: ");                               //takes value from user
    scanf("%d", &iValue);

    Pattern(iValue);

    return 0;
}


/*
   Time Complexity : O(N)
*/