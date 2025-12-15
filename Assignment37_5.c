#include <stdio.h>

///////////////////////////////////////////////////////////////////////////////
// Function Name : StrRevX
// Description   : Reverse the string in place (no extra array)
// Input         : String
// Output        : Modified reversed string
///////////////////////////////////////////////////////////////////////////////
void StrRevX(char *str)
{
    char *start = str;
    char *end = str;
    char temp;
    while(*end != '\0')     // Move end pointer to the last character
    {
        end++;
    }

    end--;                 // Step back to last valid character

    while(start < end)     // Swap characters until pointers cross

    {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}

int main()
{
    char arr[30];

    printf("Enter string : ");
    scanf("%[^'\n']s",arr);

    StrRevX(arr);             // Function call

    printf("Modified string is %s\n", arr);

    return 0;
}
