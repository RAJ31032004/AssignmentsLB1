#include <stdio.h>
/////////////////////////////////////////////////////////////////////////////
//    Function Name :       Pattern
//    Description :         To get the pattern.
//    Input :               Integer
//    Output :              print the pattern
//    Author :              Raj Samir Jadhav
//    Date :                21/11/2025
/////////////////////////////////////////////////////////////////
void Pattern(int iNo)
{
    for(int i = 1; i <= iNo; i++)
    {
        printf("%d\t", i * 2);      // Print even numbers
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number of elements: ");
    scanf("%d", &iValue);

    Pattern(iValue);

    return 0;
}
