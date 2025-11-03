#include<stdio.h>                     // for Input Output
#include<stdbool.h>                   // for 'bool' type

///////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name :       CheckEven
//    Description :         It is used to check whether the number is even or odd
//    Input :               Integer
//    Output :              Boolean
//    Author :              Raj Samir Jadhav
//    Date :                18/10/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////

bool CheckEven(int iNo)
{
    if ((iNo % 2) == 0)
    {
        return true;                     // Even number
    }
    else
    {
        return false;                    // Odd number
    }
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter number : ");       // Takes value from user
    scanf("%d", &iValue); 
    
    bRet = CheckEven(iValue);

    if (bRet == true)
    {
        printf("Number is Even\n");              //  If Even number
    }
    else
    {
        printf("Number is Odd\n");              //  If Odd number
    }
    
    return 0;
}

/*
      Time Complexity   :   O(1)
*/