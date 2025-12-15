#include <stdio.h>

///////////////////////////////////////////////////////////////////////////////
// Function Name : Display
// Description   : Display lowercase characters from a to f using recursion
// Input         : ---
// Output        : a  b  c  d  e  f
///////////////////////////////////////////////////////////////////////////////
void Display()
{
    static char ch = 'a';

    if(ch <= 'f')             // Base condition
    {
        printf("%c  ", ch);
        ch++; 
        Display();           // Recursive call
    }
}

int main()
{
    Display();
    return 0;
}
