#include <stdio.h>
#include <stdbool.h>             // Header for bool datatype

///////////////////////////////////////////////////////////////////////////////
// Function Name : ChkVowel
// Description   : Check if the string contains at least one vowel (a,e,i,o,u)
// Input         : String
// Output        : TRUE or FALSE
///////////////////////////////////////////////////////////////////////////////
bool ChkVowel(char *str)
{
    while(*str != '\0')          // Traverse string
    {   // Check for lowercase or uppercase vowels
        if(*str=='a' || *str=='e' || *str=='i' || *str=='o' || *str=='u' ||
           *str=='A' || *str=='E' || *str=='I' || *str=='O' || *str=='U')
        {
            return true;         // Vowel found → TRUE
        }
        str++;                   // Move pointer
    }
    return false;                // No vowel found → FALSE
}

int main()
{
    char arr[20];
    bool bRet = false;

    printf("Enter string : ");
    scanf("%[^'\n']s",arr);

    bRet = ChkVowel(arr);

    if(bRet == true)
    {
        printf("Contains Vowel\n");
    }
    else
    {
        printf("There is no Vowel\n");
    }

    return 0;
}
