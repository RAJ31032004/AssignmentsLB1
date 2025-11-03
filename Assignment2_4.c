#include<stdio.h>         // For Input Output
////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name :       Display
//    Description :         It is used to display a number multiple times based on user input
//    Input :               Integer
//    Output :              A number printed multiple times on screen
//    Author :              Raj Samir Jadhav
//    Date :                18/10/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////

void Display(int iNo, int iFrequency)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iFrequency; iCnt++)        // Loop to print the number iFrequency times
    {
        printf("%d\t", iNo); 
    }
    printf("\n"); 
}

int main()
{
    int iValue = 0; 
    int iCount = 0; 

    printf("Enter number : ");       //Takes value from user
    scanf("%d", &iValue); 
    
    printf("Enter frequency : ");   //Takes frequency from user
    scanf("%d", &iCount); 
    
    Display(iValue, iCount); 
    
    return 0;
}


/*
      Time Complexity   :   O(N)
*/