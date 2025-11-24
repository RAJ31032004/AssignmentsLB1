#include <stdio.h>


////////////////////////////////////////////////////////////////////////////
//    Function Name :       Pattern
//    Description :         Print positive numbers on odd rows and
//                          negative numbers on even rows.
//    Input :               Integer
//    Output :              Pattern printed on screen
//    Author :              Raj Samir Jadhav
//    Date :                25/11/2025
////////////////////////////////////////////////////////////////////////////


void Pattern(int iRow, int iCol)                // Function to display the pattern
{
    int i = 0, j = 0;

    for(i = 1; i <= iRow; i++)                 // Loop for rows
    {
        if(i % 2 == 1)                         // Odd row positive numbers
        {
            for(j = 1; j <= iCol; j++)
            {
                printf("%d\t", j);             // Print 1 2 3 4 5
            }
        }
        else                                   // Even row negative numbers
        {
            for(j = 1; j <= iCol; j++)
            {
                printf("%d\t", -j);            // Print -1 -2 -3 -4 -5
            }
        }

        printf("\n");                          // Next row
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows and columns : ");
    scanf("%d %d", &iValue1, &iValue2);

    Pattern(iValue1, iValue2);                 // Function call

    return 0;
}
