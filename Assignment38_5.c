#include <stdio.h>

///////////////////////////////////////////////////////////////////////////////
// Function Name : StrCpyToggle
// Description   : Toggle case while copying string
// Input         : String
// Output        : Modified string with toggled case
// Author        : Raj Samir Jadhav
// Date          : 02/12/2025
///////////////////////////////////////////////////////////////////////////////

void StrCpyToggle(char *src, char *dest)
{
    while(*src != '\0')                       // Traverse string
    {
        if((*src >= 'A') && (*src <= 'Z'))    // Capital → Small
        {
            *dest = *src + 32;
        }
        else if((*src >= 'a') && (*src <= 'z')) // Small → Capital
        {
            *dest = *src - 32;
        }
        else
        {
            *dest = *src;                       // Copy as it is
        }

        src++;
        dest++;
    }

    *dest = '\0';                                // NULL terminate destination
}

int main()
{
    char arr[50] = "Marvellous Python 2";
    char brr[50];                                  // Empty string

    StrCpyToggle(arr, brr);

    printf("%s\n", brr);  

    return 0;
}
