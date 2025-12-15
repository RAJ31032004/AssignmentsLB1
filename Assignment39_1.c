#include <stdio.h>

///////////////////////////////////////////////////////////////////////////////
// Function Name : Display
// Description   : Display 6 stars using recursion
// Input         : ---
// Output        : *  *  *  *  *  *
// Author        : Raj Samir Jadhav
// Date          : 07/12/2025
///////////////////////////////////////////////////////////////////////////////
void Display()
{
    static int i = 0;

    if(i < 6)           // Base condition
    {
        printf("*  ");
        i++;
        Display();     // Recursive call
    }
}

int main()
{
    Display();
    return 0;
}
