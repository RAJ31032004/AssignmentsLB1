#include <stdio.h>                                                       // For Input Output                
#include <stdbool.h>                                                    //  For the 'bool' data type

//////////////////////////////////////////////////////////////////////////////////////////////
//    Function Name :       ChkGreater
//    Description :         Accepts an integer and checks whether it is greater than 100
//    Input :               Integer         
//    Output :              Boolean (true if greater than 100, false otherwise)
//    Author :              Raj Samir Jadhav
//    Date :                20/10/2025
//////////////////////////////////////////////////////////////////////////////////////////////

bool CheckGreater(int iNo) 
{
    if (iNo > 100)                                                    // Check if the number is greater than 100
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue = 0;
    bool bRet = false;
    
    printf("Please enter number : \n");                                   // Accept Value from users
    scanf("%d", &iValue);
    
    bRet = CheckGreater(iValue);                                         // Function Call
    
    if (bRet == true) 
    {
        printf("Greater\n");                                            // prints if it's greater than 100
    }
    else
    {
        printf("Smaller\n"); 
    }
    
    return 0;
}


/*
   Time Complexity : O(N)
*/