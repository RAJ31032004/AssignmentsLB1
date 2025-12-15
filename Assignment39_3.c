#include <stdio.h>

///////////////////////////////////////////////////////////////////////////////
// Function Name : Display
// Description   : Display numbers from 5 to 1 using recursion
// Input         : ---
// Output        : 5  4  3  2  1
///////////////////////////////////////////////////////////////////////////////
void Display()
{
    static int i = 5;       // Start from 5

    if(i >= 1)             // Base condition
    {
        printf("%d  ", i);
        i--;
        Display();        // Recursive call
    }
}

int main()
{
    Display();
    return 0;
}
