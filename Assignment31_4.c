#include <stdio.h>

///////////////////////////////////////////////////////////////
//  Function Name : Pattern
//  Description   : Display special star pattern (border + diagonal)
//  Input         : Integer (Rows, Columns)
//  Output        : According to given pattern
// Author        : Raj Samir Jadhav
//  Date          : 25/11/2025
// ///////////////////////////////////////////////////////////////

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            if(i == 1 || i == iRow ||          // First or last row
               j == 1 || j == iCol ||          // First or last column
               i == j)                         // Diagonal
            {
                printf("*\t");
            }
            else
            {
                printf(" \t");                  // Blank space
            }
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows and columns : \n");
    scanf("%d %d", &iValue1, &iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}
