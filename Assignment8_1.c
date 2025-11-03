#include <stdio.h>                                     // for input and output functions

//////////////////////////////////////////////////////////////////////////////////////////////
//    Function Name :       Number
//    Description :         To check whether the number is Small, Medium or Large.
//    Input :               Integer
//    Output :              Void
//    Author :              Raj Samir Jadhav
//    Date :                20/10/2025
//////////////////////////////////////////////////////////////////////////////////////////////

void Number(int iNo)
{

    if (iNo < 50)                             // Check 1: If the number is less than 50
    {
        printf("Small\n");
    }

    else if (iNo < 100)                      // Check 2: If the number is less than 100 
    {
        printf("Medium\n");
    }

    else 
    {
        printf("Large\n");                   // If the number is 100 or greater
    }
}

int main()
{
    int iValue = 0;
    
    printf("Enter number: ");                //takes value from user
    scanf("%d", &iValue);

    Number(iValue);                          // Function Call

    return 0;
}