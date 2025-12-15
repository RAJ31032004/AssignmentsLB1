#include <stdio.h>

//////////////////////////////////////////////////////////////////////////////
// Function Name : StrCpyCap
// Description   : Copy characters into new string by converting
//                 small case letters into upper case
// Input         : String
// Output        : Capitalized string
// Author        : Raj Samir Jadhav
// Date          : 02/12/2025
////////////////////////////////////////////////////////////////////////////////
void StrCpyCap(char *src, char *dest)
{
    while(*src != '\0')                      // Traverse string
    {
        if((*src >= 'a') && (*src <= 'z'))   // If small letter, convert
        {
            *dest = *src - 32;
        }
        else
        {
            *dest = *src;                     // Keep character as it is
        }

        src++;
        dest++;
    }

    *dest = '\0';                             // NULL terminate destination string
}

int main()
{
    char arr[50] = "Marvellous Python 2";
    char brr[50];                             // Empty string

    StrCpyCap(arr, brr);

    printf("%s\n", brr);                      // Output -> MARVELLOUS PYTHON 2

    return 0;
}
