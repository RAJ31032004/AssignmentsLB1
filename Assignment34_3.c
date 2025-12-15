#include <stdio.h>

///////////////////////////////////////////////////////////////////////////////
// Function Name : Display
// Description   : If character is capital, print characters till 'Z'.
//                 If character is small, print characters till 'a' in reverse.
//                 Otherwise return directly.
// Input         : Character
// Output        : Character sequence
// Author        : Raj Samir Jadhav
// Date          : 28/11/2025
///////////////////////////////////////////////////////////////////////////////
void Display(char ch)
{
    int i = 0;

    if(ch >= 'A' && ch <= 'Z')                              // Capital letters A-Z
    {
        for(i = ch; i <= 'Z'; i++)
        {
            printf("%c ", i);
        }
        printf("\n");
    }
    else if(ch >= 'a' && ch <= 'z')                          // Small letters a-z
    {
        for(i = ch; i >= 'a'; i--)
        {
            printf("%c ", i);
        }
        printf("\n");
    }
    else
    {
        return;                                             // Neither capital nor small
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter the character : ");
    scanf("%c", &cValue);

    Display(cValue);                                       // Function Call

    return 0;
}
