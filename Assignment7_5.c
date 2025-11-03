#include <stdio.h>                                      // for input and output functions
//////////////////////////////////////////////////////////////////////////////////////////////
//    Function Name :       MultipleDisplay
//    Description :         To display first 5 multiples of N.
//    Input :               Integer
//    Output :              Void
//    Author :              Raj Samir Jadhav
//    Date :                20/10/2025
//////////////////////////////////////////////////////////////////////////////////////////////  

void MultipleDisplay(int iNo)
{
    int iCnt = 0;

    if (iNo == 0)
    {
        printf("Multiples of 0 are 0.\n");
        return; 
    }

    for (iCnt = 1; iCnt <= 5; iCnt++)                // for loop to iterate from 1 to 5
    {
        int iMultiple = iNo * iCnt;
        
        printf("%d\t", iMultiple); 
    }

    printf("\n"); 
}


int main()
{
    int iValue = 0;
    
    printf("Enter number: ");                //takes value from user
    scanf("%d", &iValue);

    MultipleDisplay(iValue);                 // Function Call

    return 0;
}


/*
   Time Complexity : O(1)
*/