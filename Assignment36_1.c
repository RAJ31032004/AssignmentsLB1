#include <stdio.h>

///////////////////////////////////////////////////////////////////////////////
// Function Name : strlwrx
// Description   : Convert complete string to lowercase
// Input         : String
// Output        : Modified string in lowercase
// Author        : Raj Samir Jadhav
// Date          : 07/12/2025
///////////////////////////////////////////////////////////////////////////////

void strlwrx(char *str)
{
    while(*str != '\0')                     // Traverse string till end
    {
        if((*str >= 'A') && (*str <= 'Z'))  // Check for capital letters
        {
            *str = *str + 32;               // Convert to lowercase (ASCII logic)
        }
        str++;                              // Move to next character
    }
}

int main()
{
    char arr[30];

    printf("Enter string : ");
    scanf("%[^'\n']s", arr);

    strlwrx(arr);                            // Function Call

    printf("Modified string is : %s\n", arr);

    return 0;
}
