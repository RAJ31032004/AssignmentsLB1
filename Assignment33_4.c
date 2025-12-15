#include <stdio.h>
#include <stdbool.h>

///////////////////////////////////////////////////////////////////////////////
// Function Name : ChkSmall
// Description   : Check whether character is small case (a-z)
// Input         : Character
// Output        : true / false
// Author        : Raj Samir Jadhav
// Date          : 28/11/2025
///////////////////////////////////////////////////////////////////////////////
bool ChkSmall(char ch)
{
    if(ch >= 'a' && ch <= 'z')                       // Small Letters range check
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

    printf("Enter the character : ");             // Takes input
    scanf("%c", &cValue);

    bRet = ChkSmall(cValue);                     // Fuction Call

    if(bRet == true)
    { 
        printf("It is Small case Character\n");  // Displays if character is small
    }
    else
    {
        printf("It is not a Small case Character\n");  // Displays if character is not small
    }

    return 0;
}
