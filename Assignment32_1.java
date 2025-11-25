#include <stdio.h>

///////////////////////////////////////////////////////////////
//  Function Name : Pattern
//  Description   : Display  pattern
//  Input         : Integer (Rows, Columns)
//  Output        : *   *   *   #
//                  *   *   #   *
//                  *   #   *   *
//                  #   *   *   *
//
//  Author        : Raj Samir Jadhav
//  Date          : 25/11/2025
///////////////////////////////////////////////////////////////

void Pattern(int iRow, int iCol)     // Function to display the pattern
{
    int i = 0, j = 0;

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            if((i + j) == (iRow + 1))  // Reverse diagonal condition
            {
                printf("#\t");
            }
            else
            {
                printf("*\t");
            }
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &iValue1, &iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}
