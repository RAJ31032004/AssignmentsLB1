#include <stdio.h>


///////////////////////////////////////////////////////////////////////////
//    Function Name :       Pattern
//    Description :         Display alternating even–odd row pattern
//    Input :               Integer
//    Output :              Prints the pattern
//    Author :              Raj Samir Jadhav
//    Date :                25/11/2025
////////////////////////////////////////////////////////////////////////////

void Pattern(int iRow, int iCol)            // Function to display the pattern
{
    int i = 0, j = 0;
    int even = 2;                           // Starting even number
    int odd = 1;                            // Starting odd number

    for(i = 1; i <= iRow; i++)              // Loop for rows
    {
        if(i % 2 == 1)                      // Odd row → print even numbers
        {
            even = 2;
            for(j = 1; j <= iCol; j++)
            {
                printf("%d\t", even);
                even += 2;
            }
        }
        else                                // Even row → print odd numbers
        {
            odd = 1;
            for(j = 1; j <= iCol; j++)
            {
                printf("%d\t", odd);
                odd += 2;
            }
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows and columns : ");
    scanf("%d %d", &iValue1, &iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}
