#include <stdio.h>

///////////////////////////////////////////////////////////////////////////////
// Function Name : Strlen
// Description   : Recursively count characters in string
// Input         : String
// Output        : Count of characters
// Author        : Raj Samir Jadhav
// Date          : 06/12/2025
///////////////////////////////////////////////////////////////////////////////


int Strlen(char *str)
{
    static int iCnt = 0;

    if(*str != '\0')       // Base condition
    {
        iCnt++;
        Strlen(str + 1);   // Recursive call with next character
    }

    return iCnt;
}

int main()
{
    int iRet = 0;
    char arr[20];

    printf("Enter string : ");
    scanf("%s", arr);

    iRet = Strlen(arr);

    printf("%d\n", iRet);

    return 0;
}
