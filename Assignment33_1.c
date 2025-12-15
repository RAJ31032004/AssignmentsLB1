#include <stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

///////////////////////////////////////////////////////////////////////////////
// Function Name : ChkAlpha
// Description   : Checks whether character is Alphabet (A-Z or a-z)
// Input         : Character
// Output        : TRUE or FALSE
// Author        : Raj Samir Jadhav
// Date          : 28/11/2025
///////////////////////////////////////////////////////////////////////////////

BOOL ChkAlpha(char ch)
{
    if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))               // Check uppercase or lowercase alphabet
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter the character : ");                                   // Takes input from user
    scanf("%c", &cValue);

    bRet = ChkAlpha(cValue);

    if(bRet == TRUE)
    {
        printf("It is Character\n");                                     // displays if its is Character
    }
    else
    {
        printf("It is not a Character\n");                                // Displays if its not a character
    }

    return 0;
}

