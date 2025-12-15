#include <stdio.h>

///////////////////////////////////////////////////////////////////////////////
// Function Name : Reverse
// Description   : Reverse the string and display output
// Input         : String
// Output        : Reversed String
// Author        : Raj Samir Jadhav
// Date          : 03/12/2025
///////////////////////////////////////////////////////////////////////////////

void Reverse(char *str)
{
    char *start = str;
    char *end = str;
    char temp;

    while(*end != '\0')                    // Move 'end' pointer to the last characte
    {
        end++;
    }
    end--;                                  // Set to last valid character
    while(start < end)                      // Swap characters from both ends
    {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }

    printf("Reversed string : %s\n", str);
}

int main()
{
    char arr[30];

    printf("Enter string : ");
    scanf("%[^'\n']s",arr);

    Reverse(arr);

    return 0;
}
