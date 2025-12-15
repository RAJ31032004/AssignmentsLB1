#include <stdio.h>

///////////////////////////////////////////////////////////////////////////////
// Function Name : Display
// Description   : Displays ASCII value of character in Decimal, Octal & Hex
// Input         : Character
// Output        : ASCII in different number systems
// Author        : Raj Samir Jadhav
// Date          : 28/11/2025
///////////////////////////////////////////////////////////////////////////////

void Display(char ch)
{
    printf("Decimal      : %d\n", ch);                       // Decimal format
    printf("Octal        : %o\n", ch);                      // Octal format
    printf("Hexadecimal  : 0x%X\n", ch);                    // Hex format
}

int main()
{
    char cValue = '\0';

    printf("Enter the character : ");                       // Takes input
    scanf("%c", &cValue);

    Display(cValue);                                       // Function Call

    return 0;
}
