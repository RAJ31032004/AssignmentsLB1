#include <stdio.h>

///////////////////////////////////////////////////////////////////////////
//    Function Name :       Pattern
//    Description :         Display reverse row-number pattern
//    Input :               Integer
//    Output :              Prints the pattern
//    Author :              Raj Samir Jadhav
//    Date :                24/11/2025
////////////////////////////////////////////////////////////////////////////

void Pattern(int iRow, int iCol)        // Function to display the patter
{
    int i = 0, j = 0;

    for(i = iRow; i >= 1; i--)          // Start from last row → iRow down to 1
    {
        for(j = 1; j <= iCol; j++)      // Loop for columns
        {
            printf("%d\t", i);          // Print same row number in each column
        }
        printf("\n");                   // New line after each row
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows and columns : ");
    scanf("%d %d", &iValue1, &iValue2);

    Pattern(iValue1, iValue2);          // Function call

    return 0;
}
