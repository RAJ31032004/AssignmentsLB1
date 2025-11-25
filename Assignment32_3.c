#include <stdio.h>

///////////////////////////////////////////////////////////////
// Function Name : Pattern
// Description   : Display  diagonal pattern
// Input         : Integer (Rows, Columns)
// Output        : Pattern display
// Author        : Raj Samir Jadhav
// Date          : 26/11/2025
///////////////////////////////////////////////////////////////

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;

    for(i = 1; i <= iRow; i++)           // Rows
    {
        for(j = 1; j <= iCol; j++)       // Columns
        {
            if(i == 1 || i == iRow)      // First or last row
            {
                printf("*\t");
            }
            else if(j == 1 || j == 2 || j == iCol || j == iCol - 1)  
            {
                printf("*\t");           // First 2 or last 2 columns
            }
            else if(i == j || (j == (iCol - i + 1)))  
            {
                printf("*\t");           // Diagonals
            }
            else
            {
                printf(" \t");           // Empty space
            }
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows:\n");
    scanf("%d", &iValue1);

    printf("Enter number of columns:\n");
    scanf("%d", &iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}
