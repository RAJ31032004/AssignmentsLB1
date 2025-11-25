#include <stdio.h>

///////////////////////////////////////////////////////////////
// Function Name : Pattern
// Description   : Display of pattern
// Input         : Integer (Rows, Columns)
// Output        : Pattern printed on screen
// Author        : Raj Samir Jadhav
// Date          : 25/11/2025
///////////////////////////////////////////////////////////////

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;

    for(i = 1; i <= iRow; i++)       // Rows
    {
        for(j = 1; j <= iCol; j++)   // Columns
        {
            if(i == 1 || i == iRow || j == 1 || j == iCol)
            {
                printf("*\t");      
            }
            else if(i < j && i + j < iCol + 1)
            {
                printf("#\t");       // Upperleft part
            }
            else if(i > j && i + j > iCol + 1)
            {
                printf("$\t");       // Lower right region
            }
            else
            {
                printf("*\t");       // Center cross region
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
