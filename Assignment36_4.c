#include <stdio.h>

///////////////////////////////////////////////////////////////////////////////
// Function Name : DisplayDigit
// Description   : Print only digits present in string
// Input         : String
// Output        : Digits from string (if any)
// Author        : Raj Samir Jadhav
// Date          : 30/11/2025
///////////////////////////////////////////////////////////////////////////////

void DisplayDigit(char *str)
{
    printf("Digits are : ");

    while(*str != '\0')                      // Traverse string
    {
        if((*str >= '0') && (*str <= '9'))   // Check if digit
        {
            printf("%c", *str);             // Print digit
        }
        str++;
    }
    printf("\n");
}

int main()
{
    char arr[30];

    printf("Enter string : ");
    scanf("%[^'\n']s",arr);

    DisplayDigit(arr);

    return 0;
}
