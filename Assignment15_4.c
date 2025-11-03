#include<stdio.h>                                                // For input and output

///////////////////////////////////////////////////////////////////////////////
//    Function Name :       MultiplicationOfDigits
//    Description :         Take input from user and return the Multiplication of all the digits
//    Input :               Integer
//    Output :              Integer
//    Author :              Raj Samir Jadhav
//    Date :                25/10/2025
///////////////////////////////////////////////////////////////////////////////

int MultiplicationOfDigits(int iNo)
{
    int iDigit = 0;
    int iMult = 1;  
    
    if(iNo == 0)
    {
        return 0;
    }

    if(iNo < 0)                                         // Handle negative numbers
    {
        iNo = -iNo;
    }


    while(iNo != 0)                                     // Loop until all digits are checked
    {
        iDigit = iNo % 10;

        if(iDigit != 0)
        {
            iMult = iMult * iDigit;                    // Multiply the result by the digit
        }

        iNo = iNo / 10;                                // Remove the last digit


    return iMult;                                      // Return the final product
}
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: ");                          // Take value from user
    scanf("%d",&iValue);

    iRet = MultiplicationOfDigits(iValue);

    printf("%d\n",iRet);
    return 0;
}

/*
   Time Complexity : o(N)
*/