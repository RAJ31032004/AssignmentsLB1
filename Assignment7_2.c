#include <stdio.h>                                    // for input and output functions

/////////////////////////////////////////////////////////////////////////////////////////////
//    Function Name :       Display 
//    Description :         To display numbers from 1 to N.
//    Input :               Integer
//    Output :              Void
//    Author :              Raj Samir Jadhav
//    Date :                20/10/2025
/////////////////////////////////////////////////////////////////////////////////////////////

void Display(int iNo)
{
    int iCnt = 0;

    for (iCnt = 1; iCnt <= iNo; iCnt++)              // for loop to iterate from 1 to iNo
    {
        printf("%d\t", iCnt); 
    }

    printf("\n"); 
}

int main()
{
    int iValue = 0;
    
    printf("Enter number: ");                              //takes value from user
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}