#include <stdio.h>

//////////////////////////////////////////////////////////////////////////////
// Function Name : Display
// Description   : Display '*' recursively as per user input
// Input         : Integer
// Output        : *  *  *  *  *  ...
// Author        : Raj Samir Jadhav
// Date          : 04/12/2025
///////////////////////////////////////////////////////////////////////////////

void Display(int iNo)
{
    static int i = 0;

    if(i < iNo)           // Base condition
    {
        printf("*  ");
        i++;
        Display(iNo);     // Recursive call
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}
