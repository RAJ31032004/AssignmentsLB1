#include <stdio.h>                      // for input and output functions
//////////////////////////////////////////////////////////////////////////////////////////////
//    Function Name :       OddDisplay
//    Description :         To display odd numbers from 1 to N.
//    Input :               Integer
//    Output :              Void
//    Author :              Raj Samir Jadhav
//    Date :                20/10/2025
//////////////////////////////////////////////////////////////////////////////////////////////

void OddDisplay(int iNo)
{  
    int iCnt = 0;

    if (iNo < 1)
    {
        return;                                     // No odd numbers to display if input is less than 1
    }
   
    for (iCnt = 1; iCnt <= iNo; iCnt = iCnt + 2)     // for loop to iterate from 1 to iNo with step of 2
    {
        printf("%d\t", iCnt); 
    }

} 

int main()
{
    int iValue = 0;
    
    printf("Enter number: ");                        //takes value from user
    scanf("%d", &iValue);

    OddDisplay(iValue);

    return 0;
}


/*
   Time Complexity : O(N)
*/