#include <stdio.h>
#include <stdbool.h>

///////////////////////////////////////////////////////////////////////////////
// Function Name : ChkDigit
// Description   : Check whether given character is digit (0-9)
// Input         : Character
// Output        : TRUE / FALSE
// Author        : Raj Samir Jadhav
// Date          : 28/11/2025
///////////////////////////////////////////////////////////////////////////////

bool ChkDigit(char ch)
{
    return (ch >= '0' && ch <= '9');         // Check whether given character is digit
}

int main()
{
    char cValue = '\0';
    bool bRet = false;

    printf("Enter the character : ");        // Take input
    scanf("%c", &cValue);

    bRet = ChkDigit(cValue);                // Function call

    if(bRet)
        printf("It is Digit\n");            // prints if its digit
    else
        printf("It is not a Digit\n");      // prints if its not a digit

    return 0;
}
