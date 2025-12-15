#include <stdio.h>

//////////////////////////////////////////////////////////////////////////////
// Function Name : Display
// Description   : Display first N capital alphabets using recursion
// Input         : Integer
// Output        : A  B  C  D  E  F
// Author        : Raj Samir Jadhav
// Date          : 05/12/2025
//////////////////////////////////////////////////////////////////////////////
void Display(int iNo)
{
    static char ch = 'A';

    if(iNo > 0)               // Base condition
    {
        printf("%c  ", ch);
        ch++;
        Display(iNo - 1);     // Recursive call
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
