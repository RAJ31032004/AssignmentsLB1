#include <stdio.h>

///////////////////////////////////////////////////////////////////////////
//    Function Name :       Pattern
//    Description :         Display '*' pattern based on row/column.
//    Input :               Integer
//    Output :              Prints the pattern
//    Author :              Raj Samir Jadhav
//    Date :                26/11/2025
////////////////////////////////////////////////////////////////////////////

void Pattern(int iRow)
{
    int i = 0, j = 0;

    for(i = 1; i <= iRow; i++)       
    {
        for(j = 1; j <= i; j++)     
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
