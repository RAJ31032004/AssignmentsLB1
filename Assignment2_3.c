#include<stdio.h>
/////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name :       Display
//    Description :         It is used to display "Hello" or "Demo" based on user input
//    Input :               Integer
//    Output :              "Hello" gets print if input < 10, otherwise "Demo" gets print
//    Author :              Raj Samir Jadhav
//    Date :                18/10/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////

void Display (int iNo) 
{
    if(iNo < 10) 
    {
        printf("Hello");                    // if the number is less than 10 hello gets print
    }
    else
    {
        printf("Demo");                      // if the number is 10 or greater demo gets print
    }
}

int main()
{
    int iValue = 0;
    
    printf("Enter number : ");                   //Takes value from user
    scanf("%d", &iValue);                     
    
    Display(iValue);                         // Function Call to display
    return 0;
}