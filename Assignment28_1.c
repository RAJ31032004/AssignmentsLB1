#include <stdio.h>

////////////////////////////////////////////////////////////////////////////
//    Function Name :       Pattern
//    Description :         To get the pattern.
//    Input :               Integer
//    Output :              print the pattern
//    Author :              Raj Samir Jadhav
//    Date :                21/11/2025
////////////////////////////////////////////////////////////////

void Pattern(int iRow, int iCol)                              // Function to display the pattern
{
    int i = 0, j = 0;

    for(i = 1; i <= iRow; i++)                               // Loop for rows
    {
        for(j = 1; j <= iCol; j++)                         // Loop for columns
        {
            printf("%c\t", 'A' + (j - 1));                 // Print A, B, C, D...
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &iValue1, &iValue2);

    Pattern(iValue1, iValue2);                              // Function call

    return 0;
}
