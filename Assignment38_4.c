#include <stdio.h>

///////////////////////////////////////////////////////////////////////////////
// Function Name : StrCpySmall
// Description   : Convert capital characters to small and copy the string
// Input         : String
// Output        : Lowercase string
// Author        : Raj Samir Jadhav
// Date          : 02/12/2025
////////////////////////////////////////////////////////////////////////////////

void StrCpySmall(char *src, char *dest)
{
    while(*src != '\0')                      // Traverse string
    {
        if((*src >= 'A') && (*src <= 'Z'))   // Convert capital to small
        {
            *dest = *src + 32;
        }
        else
        {
            *dest = *src;                    // Copy as it is
        }

        src++;
        dest++;
    }
    *dest = '\0';                            // End string
}

int main()
{
    char arr[50] = "Marvellous Python 2";
    char brr[50];                            // Empty string

    StrCpySmall(arr, brr);

    printf("%s\n", brr);  

    return 0;
}
