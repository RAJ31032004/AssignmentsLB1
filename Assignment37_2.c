#include <stdio.h>

///////////////////////////////////////////////////////////////////////////////
// Function Name : CountChar
// Description   : Return frequency of given character in string
// Input         : String, Character
// Output        : Integer (Count)
// Author        : Raj Samir Jadhav
// Date          : 03/12/2025
///////////////////////////////////////////////////////////////////////////////

int CountChar(char *str, char ch)
{
    int iCnt = 0;

    while(*str != '\0')   // Traverse string
    {
        if(*str == ch)    // Character match
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
}

int main()
{
    char arr[50];
    char cValue;
    int iRet = 0;

    printf("Enter string : ");
    scanf("%[^'\n']s", arr);

    printf("Enter the character : ");
    scanf(" %c", &cValue);              // Space before %c handles newline

    iRet = CountChar(arr, cValue);

    printf("Character frequency is %d\n", iRet);

    return 0;
}
