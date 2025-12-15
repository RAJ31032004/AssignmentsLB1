#include <stdio.h>

///////////////////////////////////////////////////////////////////////////////
// Function Name : LastChar
// Description   : Return index of last occurrence of given character
// Input         : String, Character
// Output        : Integer index OR -1 if not found
// Author        : Raj Samir Jadhav
// Date          : 07/12/2025
///////////////////////////////////////////////////////////////////////////////

int LastChar(char *str, char ch)
{
    int i = 0, iIndex = -1;

    while(*str != '\0')          // Traverse string
    {
        if(*str == ch)          // If match found
        { 
            iIndex = i;         // Store last known position
        }
        i++;
        str++;
    }
    return iIndex;
}

int main()
{
    char arr[50];
    char cValue;
    int iRet = 0;

    printf("Enter string : ");
    scanf("%[^'\n']s", arr);

    printf("Enter the character : ");
    scanf(" %c", &cValue);

    iRet = LastChar(arr, cValue);

    printf("Index is : %d\n", iRet);

    return 0;
}
