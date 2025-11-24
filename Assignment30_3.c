#include <stdio.h>

///////////////////////////////////////////////////////////////
//  Function Name : Pattern
//  Description   : Display pattern of $ and *
//  Input         : Integer (Rows, Columns)
//  Output        : Pattern printed on screen
//  Author        : Raj Samir Jadhav
//  Date          : 26/11/2025
///////////////////////////////////////////////////////////////

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            if(j <= i)                           // Print $ when column <= row
            {
                printf("$\t");
            }
            else                                 // Print * otherwise
            {
                printf("*\t");
            }
        }
        printf("\n");                            // New line after each row
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &iValue1, &iValue2);

    Pattern(iValue1, iValue2);     // Function call

    return 0;
}
