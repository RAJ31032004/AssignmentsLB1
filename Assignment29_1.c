#include <stdio.h>

////////////////////////////////////////////////////////////////////////////
//    Function Name :       Pattern
//    Description :         Display continuous numbers till 9.
//    Input :               Integer
//    Output :              Prints the pattern
//    Author :              Raj Samir Jadhav
//    Date :                25/11/2025
////////////////////////////////////////////////////////////////////////////


void Pattern(int iRow, int iCol)           // Function to display the pattern
{
    int i = 0, j = 0;
    int num = 1;                          // Starting number

    for(i = 1; i <= iRow; i++)            // Loop for rows
    {
        for(j = 1; j <= iCol; j++)        // Loop for columns
        {
            printf("%d\t", num);

            num++;                        // Increase number

            if(num > 9)                   // If number goes beyond 9, restart from 1
            {
                num = 1;
            }
        }
        printf("\n");                     // New line after each row
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows and columns : ");
    scanf("%d %d", &iValue1, &iValue2);

    Pattern(iValue1, iValue2);            // Function call

    return 0;
}
