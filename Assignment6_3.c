#include <stdio.h>                              // For Input Output  
#include <stdbool.h>                           //  For the 'bool' data type

//////////////////////////////////////////////////////////////////////////////////////////////
//    Function Name :       CheckEqual
//    Description :         Accepts two integers and checks whether they are equal
//    Input :               Integer
//    Output :              Boolean (true if equal, false otherwise)
//    Author :              Raj Samir Jadhav
//    Date :                20/10/2025
//////////////////////////////////////////////////////////////////////////////////////////////
bool CheckEqual(int iNo1, int iNo2) 
{
    // Logic
    if (iNo1 == iNo2)                                      // Check if the two numbers are equal          
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
    int iValue1 = 0, iValue2 = 0;
    bool bRet = false;
    
    printf("Please enter two numbers : \n");                  // Accept Value from users
    scanf("%d %d", &iValue1, &iValue2);
    
    bRet = CheckEqual(iValue1, iValue2);                       // Function Call
    
    if (bRet == true) 
    {
        printf("Equal\n");
    }
    else
    {
        printf("Not Equal\n"); 
    }
    
    return 0;

}


/*
   Time Complexity : O(N)
*/