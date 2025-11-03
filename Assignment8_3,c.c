#include <stdio.h>                                                 // for input and output functions
//////////////////////////////////////////////////////////////////////////////////////////////
//    Function Name :       Factorial   
//    Description :         To calculate factorial of given number.
//    Input :               Integer
//    Output :              Integer
//    Author :              Raj Samir Jadhav
//    Date :                20/10/2025
//////////////////////////////////////////////////////////////////////////////////////////////

int Factorial(int iNo)
{   
    int iFact = 1;
    int iCnt = 0;

    if (iNo < 0)                                 
    {
        iNo = -iNo; 
    }
    
    for (iCnt = iNo; iCnt >= 1; iCnt--)          // for loop to iterate from iNo to 1
    {
        iFact = iFact * iCnt;
    }
    
    return iFact;
}


int main()
{
    int iValue = 0, iRet = 0;                      
    
    printf("Enter number: ");                      //takes value from user
    scanf("%d", &iValue);

    iRet = Factorial(iValue);                      // Function Call

    printf("Factorial of number is %d\n", iRet);

    return 0;
}


/*
   Time Complexity : O(N)
*/