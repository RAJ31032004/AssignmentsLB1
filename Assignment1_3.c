#include<stdio.h>
////////////////////////////////////////////////////////////////////////////////////////////
/// 
/// Function Name : Display
/// Description :   To display numbers from 5 to 1
/// Input :         No Input
/// Output :        Display numbers from 5 to 1  e.g(5 4 3 2 1)
/// Author :        Raj Samir Jadhav
/// Date :          09/10/2025
///
/////////////////////////////////////////////////////////////////////////////////////////////

void Display()               //  Function declaration
{
    int i = 0;
    i = 5;
    while( i >= 1 ) 
    {
        printf("%d",i);     //  Logic to display numbers
        i--; 
}
}

int main()
{
    Display();            //function call to display numbers
    return 0;
}

/*
      Time Complexity   :   O(N)
*/