#include <stdio.h>


////////////////////////////////////////////////////////////////////////////
//    Function Name :       Pattern
//    Description :         Display alphabets on odd rows and numbers on even rows
//    Input :               Integer
//    Output :              Prints the pattern
//    Author :              Raj Samir Jadhav
//    Date :                25/11/2025
////////////////////////////////////////////////////////////////////////////


void Pattern(int iRow, int iCol)            // Function to display the pattern
{
    int i = 0, j = 0;

    for(i = 1; i <= iRow; i++)              // Loop for rows
    {
        if(i % 2 == 1)                      // Odd row  print alphabets
        {
            for(j = 1; j <= iCol; j++)
            {
                printf("%c\t", 'a' + (j - 1)); // Print a b c d e
            }
        }
        else                                   // Even row  print numbers
        {
            for(j = 1; j <= iCol; j++)
            {
                printf("%d\t", j);            // Print 1 2 3 4 5
            }
        }
        printf("\n");                         // New line after each row
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows and columns : ");
    scanf("%d %d", &iValue1, &iValue2);

    Pattern(iValue1, iValue2);             // Function call

    return 0;
}
