#include <stdio.h>

//////////////////////////////////////////////////////////////
// Function Name : Pattern
// Description   : Display diagonal pattern
// Input         : Integer (Rows, Columns)
// Output        : Pattern display
// Author        : Raj Samir Jadhav
// Date          : 26/11/2025
//////////////////////////////////////////////////////////////

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol + 1; j++)
        {
            if(i == 1 || i == iRow)          // First or last row
            {
                printf("%d\t", j);
            }
            else if(j == 1)                  // First column
            {
                printf("1\t");
            }
            else if(j == 2)                  // Second column
            {
                printf("2\t");
            }
            else if(j == iCol + 1)           // Last column 
            {
                printf("5\t");
            }
            else if(i == j)                  // Diagonal
            {
                printf("%d\t", i);
            }
            else
            {
                printf("\t");                // Blank
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
