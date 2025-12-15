#include <stdio.h>

///////////////////////////////////////////////////////////////////////////////
// Function Name : strtogglex
// Description   : Toggle the case of each character of string
// Input         : String
// Output        : Modified String
// Author        : Raj Samir Jadhav
// Date          : 30/11/2025
///////////////////////////////////////////////////////////////////////////////

void strtogglex(char *str)
{
    while(*str != '\0')                              // Traverse entire string
    {
        if((*str >= 'A') && (*str <= 'Z'))           // If capital letter → convert to small
        {
            *str = *str + 32;
        }
        else if((*str >= 'a') && (*str <= 'z'))       // If small letter → convert to capital
        {
            *str = *str - 32;
        }
        str++;
    }
}

int main()
{
    char arr[30];

    printf("Enter string : ");
    scanf("%[^'\n']s",arr);

    strtogglex(arr);                                     // Function call

    printf("Modified string is : %s\n",arr);

    return 0;
}
