#include <stdio.h>
///////////////////////////////////////////////////////////////////////////////
// Function Name : Display
// Description   : Count Capital letter in string
// Input         : String
// Output        : Count of Capital letters
// Author        : Raj Samir Jadhav
// Date          : 3/12/2025
///////////////////////////////////////////////////////////////////////////////


int CountCapital(char *str)                      // Function to count capital letters in string
{
    int iCnt = 0;
    while(*str != '\0')                          // Traverse string till null character
{
        if((*str >= 'A') && (*str <= 'Z'))        // Check if character is Capital (A-Z)
        {
            iCnt++;
        }
        str++;                                    // Move pointer to next character
    }

    return iCnt;                                 // Return count
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter string : ");
    scanf("%[^'\n']s",arr);                      // Accept string till newline

    iRet = CountCapital(arr);

    printf("Number of capital characters : %d\n",iRet);

    return 0;
}
