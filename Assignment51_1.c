/////////////////////////////////////////////////////////////////////////////////////////////
//
//  Problem Statement : Write a generic program which accepts one value and one number
//                      from user and prints that value given number of times.
//
//  Input  : M   7
//  Output : M M M M M M M
//
//  Input  : 11  3
//  Output : 11 11 11
//
//  Input  : 3.7 6
//  Output : 3.7 3.7 3.7 3.7 3.7 3.7
//
//  Author : Raj Samir Jadhav
//  Date   : 10/01/2026
//
/////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

/* Functions for different data types */

void DisplayChar(char value, int iSize)
{
    int iCnt = 0;
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("%c ", value);
    }
    printf("\n");
}

void DisplayInt(int value, int iSize)
{
    int iCnt = 0;
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("%d ", value);
    }
    printf("\n");
}

void DisplayFloat(float value, int iSize)
{
    int iCnt = 0;
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("%.1f ", value);
    }
    printf("\n");
}

/* Generic Macro */
#define Display(value, size) _Generic((value), \
        char: DisplayChar,                     \
        int: DisplayInt,                       \
        float: DisplayFloat                   \
    )(value, size)

int main()
{
    Display('M', 7);
    Display(11, 3);
    Display(3.7f, 6);

    return 0;
}
