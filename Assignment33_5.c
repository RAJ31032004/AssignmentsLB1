#include <stdio.h>
#include <stdbool.h>

///////////////////////////////////////////////////////////////////////////////
// Function Name : DisplaySchedule
// Description   : Display exam time based on division (A/B/C/D)
// Input         : Character (Division)
// Output        : Text message with exam time
// Note          : Case-Insensitive
// Author        : Raj Samir Jadhav
// Date          : 28/11/2025
///////////////////////////////////////////////////////////////////////////////

void DisplaySchedule(char chDiv)
{
    if(chDiv >= 'a' && chDiv <= 'z')            // Convert lowercase to uppercase
    {
        chDiv = chDiv - 32;
    }
 
    switch(chDiv)                               // Switch case 
    {
        case 'A':
            printf("Your exam at 7 AM\n");
            break;

        case 'B':
            printf("Your exam at 8.30 AM\n");
            break;

        case 'C':
            printf("Your exam at 9.20 AM\n");
            break;

        case 'D':
            printf("Your exam at 10.30 AM\n");
            break;

        default:
            printf("Invalid Division\n");
            break;
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter your division : ");          // Take input
    scanf("%c", &cValue);

    DisplaySchedule(cValue);                   // Function Call

    return 0;
}
