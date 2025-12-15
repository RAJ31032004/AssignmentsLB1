#include <stdio.h>
///////////////////////////////////////////////////////////////////////////////
// Function Name : Difference
// Description   : Calculate difference between frequency of small and capital characters
// Input         : String
// Output        : Integer (Difference)
// Author        : Raj Samir Jadhav
// Date          : 03/12/2025
///////////////////////////////////////////////////////////////////////////////
int Difference(char *str)
{
    int iSmall = 0, iCapital = 0;

    while(*str != '\0')                         // Traverse string
    {
        if((*str >= 'a') && (*str <= 'z'))      // Count small letters
        {
            iSmall++;
        }
        else if((*str >= 'A') && (*str <= 'Z'))  // Count capital letters
        {
            iCapital++;
        }
        str++;                                    // Move to next character
    }

    return (iSmall - iCapital);                   // Return difference
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter string : ");
    scanf("%[^'\n']s",arr);

    iRet = Difference(arr);

    printf("Difference is : %d\n", iRet);

    return 0;
}
