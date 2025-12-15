#include <stdio.h>

///////////////////////////////////////////////////////////////////////////////
// Function Name : Display
// Description   : Convert uppercase to lowercase & lowercase to uppercase.
// Input         : Character
// Output        : Converted character or same for non-alphabet
// Author        : Raj Samir Jadhav
// Date          : 28/11/2025
///////////////////////////////////////////////////////////////////////////////
void Display(char ch)
{
    if(ch >= 'A' && ch <= 'Z')                                  // Check if character is uppercase A-Z
    {
        ch = ch + 32;                                           // Convert to lowercase
    }
    else if(ch >= 'a' && ch <= 'z')                              // Check if character is lowercase a-z
    {
        ch = ch - 32;                                           // Convert to uppercase
    }
    printf("Output : %c\n", ch);                                // Else keep character as it is
}

int main()
{
    char cValue = '\0';

    printf("Enter the character : ");
    scanf("%c", &cValue);

    Display(cValue);                                             // Function Call

    return 0;
}
