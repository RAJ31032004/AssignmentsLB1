#include <stdio.h>
/////////////////////////////////////////////////////////////////////////////////////////////
//    Function Name :       DollarToINR
//    Description :         Converts an amount in US Dollars to Indian Rupees.
//    Input :               Integer (Amount in USD)
//    Output :              Integer (Equivalent amount in INR)
//    Author :              Raj Samir Jadhav
//    Date :                20/10/2025
/////////////////////////////////////////////////////////////////////////////////////////////
int DollarToINR(int iNo)
{
    int iRate = 70;                         // The fixed conversion rate is 70 rupees per dollar.
    
    return iNo * iRate; 
}

int main()
{
    int iValue = 0;                         // To store the USD input
    int iRet = 0;                           // To store the INR result

    printf("Enter number of USD: ");
    scanf("%d", &iValue);

    iRet = DollarToINR(iValue);

    printf("Value in INR is %d\n", iRet);

    return 0;
}

/*
   Time Complexity : O(1)
*/