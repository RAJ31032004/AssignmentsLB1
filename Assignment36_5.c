#include <stdio.h>

///////////////////////////////////////////////////////////////////////////////
// Function Name : CountWhite
// Description   : Count number of spaces present in string
// Input         : String
// Output        : Integer (space count)
// Author        : Raj Samir Jadhav
// Date          : 30/11/2025
///////////////////////////////////////////////////////////////////////////////

int CountWhite(char *str)
{
    int iCnt = 0;

    while(*str != '\0')      // Traverse string
    {
        if(*str == ' ')      // Check for space
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
    int iRet = 0;

    printf("Enter string : ");
    scanf("%[^'\n']s",arr);

    iRet = CountWhite(arr);

    printf("Number of white spaces : %d\n", iRet);

    return 0;
}
