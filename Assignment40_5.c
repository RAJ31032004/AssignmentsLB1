#include <stdio.h>

///////////////////////////////////////////////////////////////////////////////
// Function Name : Display
// Description   : Display first iNo lowercase letters using recursion
// Input         : Integer (iNo)
// Output        : a  b  c  d  e  f
///////////////////////////////////////////////////////////////////////////////
void Display(int iNo)
{
    static char ch = 'a';

    if(iNo > 0)            // Base condition
    {
        printf("%c  ", ch);
        ch++;
        Display(iNo - 1);   // Recursive call
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
