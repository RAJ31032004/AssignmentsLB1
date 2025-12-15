#include <stdio.h>
#include <stdbool.h>                                         // For True False

///////////////////////////////////////////////////////////////////////////////
// Function Name : ChkSpecial
// Description   : Check whether character is special symbol (!,@,#,$,%,^,&,*)
// Input         : Character
// Output        : TRUE or FALSE
// Author        : Raj Samir Jadhav
// Date          : 28/11/2025
///////////////////////////////////////////////////////////////////////////////

bool ChkSpecial(char ch)
{
    if(ch == '!' || ch == '@' || ch == '#' || ch == '$' ||
       ch == '%' || ch == '^' || ch == '&' || ch == '*')             // Character Symbol
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

    printf("Enter the character : ");                                 // Take input
    scanf("%c", &cValue);

    bRet = ChkSpecial(cValue);                                        // Function Call

    if(bRet == true)
    {
        printf("It is a special character\n");                        // If Its Special Character
    }
    else
    {
        printf("It is not a special character\n");                    // If its not Special Character
    }

    return 0;
}
