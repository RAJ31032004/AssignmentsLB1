#include <stdio.h>

///////////////////////////////////////////////////////////////
//  Function Name : Pattern
//  Description   : Displays special * and @ pattern
//  Input         : Integer (Rows, Columns)
//  Output        : Pattern printed on screen
//  Author        : Raj Samir Jadhav
//  Date          : 26/11/2025
///////////////////////////////////////////////////////////////

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;

    for(i = 1; i <= iRow; i++)           // Loop for rows
    {
        for(j = 1; j <= iCol; j++)       // Loop for columns
        {
            if(i == 3 || i == 4)         // Middle two rows all @
            {
                printf("@\t");
            }
            else if((i == 1 || i == 2 || i == 6) && j == 3)               
            {
                printf("@\t");
            }
            else if(i == 5 && (j == 2 || j == 3 || j == 4))
            {
                printf("@\t");
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
