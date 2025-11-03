#include<stdio.h>                     // For Input Output

/////////////////////////////////////////////////////////////////////////////////////////////
//    Function Name :       Display
//    Description :         It is used to display Marvellous on screen 5 times          
//    Input :               No Input
//    Output :              "Marvellous" printed 5 times 
//    Author :              Raj Samir Jadhav
//    Date :                18/10/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////

void Display()
{
    int i = 0;
    for(i = 1; i <= 5; i++)           //  for Loop to print "Marvellous" 5 times
    {
        printf("Marvellous\n");
    }
}

int main()
{
    Display();
    return 0;
}



/*
      Time Complexity   :   O(1)
*/