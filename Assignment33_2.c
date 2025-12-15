#include <stdio.h>
#include <stdbool.h>

///////////////////////////////////////////////////////////////////////////////
// Function Name : ChkCapital
// Description   : Check whether given character is capital alphabet (A-Z)
// Input         : Character
// Output        : true / false
// Author        : Raj Samir Jadhav
// Date          : 28/11/2025
///////////////////////////////////////////////////////////////////////////////
bool ChkCapital(char ch)
{
    if(ch >= 'A' && ch <= 'Z')                                  // Check if character is between A and Z
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    char cValue = '\0';
    bool bRet = false;

    printf("Enter the character : ");
    scanf("%c", &cValue);

    bRet = ChkCapital(cValue);

    if(bRet == true)
    {
        printf("It is Capital Character\n");             // Displays if character is capital
    }
    else
    {
        printf("It is not a Capital Character\n");        // Displays if charcter is not Capital
    }

    return 0;
}
