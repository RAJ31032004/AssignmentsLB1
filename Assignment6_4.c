#include <stdio.h>                         // For Input Output
/////////////////////////////////////////////////////////////////////////////////////////////
//    Function Name :       Multiply
//    Description :         Accepts three integers and returns their multiplication
//    Input :               Integer
//    Output :              Integer
//    Author :              Raj Samir Jadhav
//    Date :                20/10/2025
/////////////////////////////////////////////////////////////////////////////////////////////


int Multiply(int iNo1, int iNo2, int iNo3)                      // Function to multiply three integers
{
    return iNo1 * iNo2 * iNo3;
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0, iRet = 0;
    
    printf("Please enter three numbers\n");
    scanf("%d %d %d", &iValue1, &iValue2, &iValue3);
    
    iRet = Multiply(iValue1, iValue2, iValue3);                // Function Call
    
    printf("%d\n", iRet);                                     // Display the result
    
    return 0;
}

/*
   Time Complexity : O(N)
*/