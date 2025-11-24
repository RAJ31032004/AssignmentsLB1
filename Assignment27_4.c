#include <stdio.h>


void Pattern(int iRow, int iCol)    // Function to display pattern
{
    int i = 0, j = 0;

    for(i = 1; i <= iRow; i++)       // Outer loop → rows
    {
        for(j = 1; j <= iCol; j++)   // Inner loop → columns
        {
            if(i == j)               // Condition for diagonal
            {
                printf("*\t");       // Print star at diagonal position
            }
            else
            {
                printf("#\t");       // Print # for all other positions
            }
        }
        printf("\n");                // Move to next row
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &iValue1, &iValue2);

    Pattern(iValue1, iValue2);       // Function call

    return 0;
}
