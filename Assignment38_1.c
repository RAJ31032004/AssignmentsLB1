#include <stdio.h>

////////////////////////////////////////////////////////////////////////////////
// Function Name : StrCpyRev
// Description   : Copy characters of string into another string in reverse order
// Input         : String
// Output        : Reversed String
// Author        : Raj Samir Jadhav
// Date          : 02/12/2025
///////////////////////////////////////////////////////////////////////////////
void StrCpyRev(char *src, char *dest)
{
    char *end = src;
    while(*end != '\0')        // Move end pointer to last character of src
    {
        end++;
    }
    end--;                     // Last valid character

    while(end >= src)          // Copy characters in reverse direction
    {
        *dest = *end;
        dest++;
        end--;
    }

    *dest = '\0';              // NULL terminate destination string
}

int main()
{
    char arr[30] = "Marvellous Python";
    char brr[30];              // Empty string

    StrCpyRev(arr, brr);

    printf("%s\n", brr);        

    return 0;
}