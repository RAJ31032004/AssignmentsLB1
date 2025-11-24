#include <stdio.h>


////////////////////////////////////////////////////////////////////////////
//    Function Name :       Pattern
//    Description :         Display increasing numbers row-wise
//    Input :               Integer
//    Output :              Prints the pattern
//    Author :              Raj Samir Jadhav
//    Date :                26/11/2025
////////////////////////////////////////////////////////////////////////////


void Pattern(int iRow, int iCol)            // Function to display the pattern
{
    int i = 0, j = 0;
    int num = 0;

    for(i = 1; i <= iRow; i++)                // Loop for rows
    {
        num = i;                              // Starting number for each row

        for(j = 1; j <= iCol; j++)            // Loop for columns
        {
            printf("%d\t", num);              // Print number
            num++;                            // Increase number
        }
        printf("\n");                         // Next line
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows and columns : ");
    scanf("%d %d", &iValue1, &iValue2);

    Pattern(iValue1, iValue2);                // Function call

    return 0;
}
