#include<stdio.h>
/////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name :       Display
//    Description :         It is used to display asterisks based on user input
//    Input :               Integer
//    Output :              Asterisks printed on screen in decreasing order
//    Author :              Raj Samir Jadhav
//    Date :                18/10/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////

void Display(int iNo)
{
    while(iNo > 0) 
    {
        printf(" * ");
        iNo--;                                // Counter keeps on decreasing
    }
}

int main()
{
    int iValue = 0;
    
    printf("Enter number : ");                //Takes value from user       
    scanf("%d", &iValue); 
    
    Display(iValue);                         // Function Call to display
    return 0;
}

/*
      Time Complexity   :   O(N)
*/