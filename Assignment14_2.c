#include<stdio.h>                                       // For input and output                        
#define TRUE 1
#define FALSE 0

////////////////////////////////////////////////////////////////////////////////
//    Function Name :       CheckZero
//    Description :         Take input from user and checks whether it has zero or not
//    Input :               Integer
//    Output :              True or False
//    Author :              Raj Samir Jadhav
//    Date :                25/10/2025
///////////////////////////////////////////////////////////////////////////////

typedef int BOOL;                                       

BOOL CheckZero(int iNo)
{
    int iDigit = 0;

    if(iNo == 0)                                         // Handle the special case where the input itself is 0
    {
        return TRUE;
    }
    
    if(iNo < 0)                                         // Handle negative numbers
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        
        iDigit = iNo % 10;                                // Get the last digit

        
        if(iDigit == 0)                                   // Check if the digit is 0
        {
            return TRUE;                                  // Found a zero hence exit function
        }
        
        
        iNo = iNo / 10;                                   // Remove the last digit
    }

    return FALSE;
}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter number: ");                              // Take Input from user
    scanf("%d", &iValue);

    bRet = CheckZero(iValue);

    if(bRet == TRUE)
    {
        printf("It Contains Zero");
    }
    else
    {
        printf("There is no Zero");
    }

    return 0;
}

/*
    Time Complexity : O(N)
*/