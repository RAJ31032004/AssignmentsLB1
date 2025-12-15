#include <stdio.h>

////////////////////////////////////////////////////////////////////////////////
// Function Name : StrCpyX
// Description   : Copy characters to another string by removing spaces
// Input         : Source string
// Output        : String without spaces
// Author        : Raj Samir Jadhav
// Date          : 02/12/2025
///////////////////////////////////////////////////////////////////////////////

void StrCpyX(char *src, char *dest)
{
    while(*src != '\0')    // Traverse source string
    {
        if(*src != ' ')    // Skip white spaces
        {
            *dest = *src;  // Copy non-space characters
            dest++;
        }
        src++;
    }
    *dest = '\0';           // Add NULL terminator
}

int main()
{
    char arr[50] = "Marvel  lous Pyth   on";
    char brr[50];             // Empty string for destination

    StrCpyX(arr, brr);

    printf("%s\n", brr);      // Output : MarvellousPython

    return 0;
}
