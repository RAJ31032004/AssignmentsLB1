#include <stdio.h>

///////////////////////////////////////////////////////////////////////////////
// Function Name : Display
// Description   : Display numbers from 1 to 5 using recursion
// Input         : ---
// Output        : 1  2  3  4  5
///////////////////////////////////////////////////////////////////////////////
void Display()
{
    static int i = 1;

    if(i <= 5)         // Base condition
    {
        printf("%d  ", i);
        i++;
        Display();     // Recursive call
    }
}

int main()
{
    Display();
    return 0;
}
