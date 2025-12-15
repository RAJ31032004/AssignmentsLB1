#include <stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

///////////////////////////////////////////////////////////////////////////////
// Function Name : ChkChar
// Description   : Check whether the given character is present in string
// Input         : String, Character
// Output        : TRUE / FALSE
///////////////////////////////////////////////////////////////////////////////
BOOL ChkChar(char *str, char ch)
{
    while(*str != '\0')                 // Traverse string
    {
        if(*str == ch)                  // Compare each character
        {
            return TRUE;                // Found
        }
        str++;
    }
    return FALSE;                        // Not found
}

int main()
{
    char arr[50];
    char cValue;
    BOOL bRet = FALSE;

    printf("Enter string : ");
    scanf("%[^'\n']s",arr);

    printf("Enter the character : ");
    scanf(" %c",&cValue);                 // Space before %c to avoid newline issue

    bRet = ChkChar(arr,cValue);

    if(bRet == TRUE)
    {
        printf("TRUE\n");
    }
    else
    {
        printf("FALSE\n");
    }

    return 0;
}
