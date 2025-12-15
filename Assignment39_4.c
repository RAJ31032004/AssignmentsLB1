#include <stdio.h>

///////////////////////////////////////////////////////////////////////////////
// Function Name : Display
// Description   : Display characters from A to F using recursion
// Input         : ---
// Output        : A  B  C  D  E  F
///////////////////////////////////////////////////////////////////////////////
void Display()
{
    static char ch = 'A';

    if(ch <= 'F')        // Base condition
    {
        printf("%c  ", ch);
        ch++;
        Display();        // Recursive call
    }
}

int main()
{
    Display();
    return 0;
}
