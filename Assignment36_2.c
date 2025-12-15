#include <stdio.h>

////////////////////////////////////////////////////////////////////////////////
// Function Name : struprx
// Description   : Convert complete string into uppercase
// Input         : String
// Output        : Uppercase string
// Author        : Raj Samir Jadhav
// Date          : 07/12/2025
//////////////////////////////////////////////////////////////////////////////

void struprx(char *str)
{
    while(*str != '\0')                      // Traverse string
    {
        if((*str >= 'a') && (*str <= 'z'))   // Check for small letters
        {
            *str = *str - 32;                // Convert to uppercase (ASCII logic)
        }
        str++;
    }
}

int main()
{
    char arr[30];

    printf("Enter string : ");
    scanf("%[^'\n']s",arr);

    struprx(arr);                            // Function Call

    printf("Modified string is : %s\n",arr);

    return 0;
}
