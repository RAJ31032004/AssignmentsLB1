#include <stdio.h>

///////////////////////////////////////////////////////////////
//  Function Name : Pattern
//  Description   : Display diagonal based pattern
//  Input         : Integer 
//  Output        : $   *   *   *   *
//                  #   $   *   *   *
//                  #   #   $   *   *
//                  #   #   #   $   *
//                  #   #   #   #   $
//
//  Author        : Raj Samir Jadhav
//  Date          : 25/11/2025
///////////////////////////////////////////////////////////////


void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            if(i == j)                 // Diagonal
            {
                printf("$\t");
            }
            else if(j < i)             // Left side
            {
                printf("#\t");
            }
            else                       // Right side
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

    printf("Enter number of rows and columns : \n");
    scanf("%d %d", &iValue1, &iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}
