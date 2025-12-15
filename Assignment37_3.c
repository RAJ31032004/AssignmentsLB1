#include <stdio.h>

///////////////////////////////////////////////////////////////////////////////
// Function Name : FirstChar
// Description   : Return index of first occurrence of character in string
// Input         : String, Character
// Output        : Integer Index OR -1 if not found
// Author        : Raj Samir Jadhav
// Date          : 01/12/2025
////////////////////////////////////////////////////////////////////////////////

int FirstChar(char *str, char ch)
{
    int i = 0;

    while(*str != '\0')               // Traverse string
    {
        if(*str == ch)                // Compare character
        {
            return i;                 // Return current index
        }
        i++;
        str++;
    }
    return -1;                          // Return -1 if not found
}

int main()
{
    char arr[50];
    char cValue;
    int iRet = 0;

    printf("Enter string : ");
    scanf("%[^'\n']s",arr);

    printf("Enter the character : ");
    scanf(" %c",&cValue);                 // Space before %c avoids newline issue

    iRet = FirstChar(arr,cValue);

    printf("Index is : %d\n",iRet);

    return 0;
}
