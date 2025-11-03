#include<stdio.h>                       // For Input Output
#include<stdbool.h>                     //  for 'bool' type
/////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name :       Check
//    Description :         It is used to check whether the number is divisible by 5
//    Input :               Integer
//    Output :              Boolean
//    Author :              Raj Samir Jadhav
//    Date :                18/10/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////

bool Check(int iNo)                  // Function to check divisibility by 5
{

    if((iNo % 5) == 0) 
    {
        return true;
    }
    else
    {
        return false;                // Return false if not divisible by 5
    }
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter number : ");         //Takes value from user
    scanf("%d", &iValue); 

    bRet = Check(iValue);

    if(bRet == true)
    {
        printf("Divisible by 5");
    }
    else
    {
        printf("Not Divisible by 5");
    }

    return 0;
}



/*
      Time Complexity   :   O(1)
*/