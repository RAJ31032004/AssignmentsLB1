#include <stdio.h>

///////////////////////////////////////////////////////////////
//  Function Name : Pattern
//  Description   : Display decreasing star triangle
//  Input         : Integer (Rows)
//  Output        : *****
//                  ****
//                  ***
//                  **
//                  *
//  Author        : Raj Samir Jadhav
//  Date          : 25/11/2025
///////////////////////////////////////////////////////////////

void Pattern(int iRow)
{
    int i = 0, j = 0;

    for(i = iRow; i >= 1; i--)      // Start from max stars
    {
        for(j = 1; j <= i; j++)     // Print stars equal to row number
        {
            printf("*");
        }
        printf("\n");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number of rows : \n");
    scanf("%d", &iValue);

    Pattern(iValue);

    return 0;
}
