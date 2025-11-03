#include<stdio.h>                // For Input Output

/////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name :       Display
//    Description :         It is used to display asterisks based on user input
//    Input :               Integer
//    Output :              Asterisks printed on screen
//    Author :              Raj Samir Jadhav
//    Date :                18/10/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////

void Display(int iNo)
{
    int iCnt = 0;
    while(iCnt < iNo) 
    {
        printf(" * ");
        iCnt++;                   // Counter keeps on increasing       
    }
}

int main()
{
    int iValue = 0;
    
    printf("Enter number : ");      //Takes value from user
    scanf("%d", &iValue); 
    
    Display(iValue);
    return 0;
}

/*
      Time Complexity   :   O(N)
*/