#include <stdio.h>

///////////////////////////////////////////////////////////////////////////////
// Function Name : DisplayASCII
// Description   : Displays ASCII table including Symbol, Decimal, Hexadecimal,
//                 and Octal representation from 0 to 255.
// Input         : No input
// Output        : Prints ASCII table on screen
// Author        : Raj Samir Jadhav
// Date          : 28/11/2025
///////////////////////////////////////////////////////////////////////////////
void DisplayASCII()
{
    int i = 0;

    printf("Symbol\tDecimal\tHex\tOctal\n");
    printf("--------------------------------------------\n");

    
    for(i = 0; i <= 255; i++)                               // Loop to print values from 0 to 255
    {
        if(i >= 32 && i <= 126)                             // Check if character is printable ASCII
        {
            printf("%c\t%d\t%X\t%o\n", i, i, i, i);
        }
        else
        {
            printf(".\t%d\t%X\t%o\n", i, i, i);             // Non-printable characters displayed as dot
        }
    }
}

int main()
{
    DisplayASCII();                                         // Function call
    return 0;
}
