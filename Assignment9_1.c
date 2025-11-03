#include <stdio.h>                                             // for input and output functions
#include <stdlib.h>                                            // for abs() function
//////////////////////////////////////////////////////////////////////////////////////////////
//    Function Name :       Display
//    Description :         To print '*' and '#' patterns based on the input number.
//    Input :               Integer
//    Output :              Void
//    Author :              Raj Samir Jadhav
//    Date :                20/10/2025
//////////////////////////////////////////////////////////////////////////////////////////////

void Display(int iNo)
{
    int iCount = abs(iNo);                                          

    int i = 0;                                         

    if (iCount == 0)                                           // Handle the case when input is zero
    {
        printf("Input is zero, no pattern to display.\n");                  
        return;
    }

    for (i = 1; i <= iCount; i++)                                     
    {
        printf("* "); 
    }

    for (i = 1; i <= iCount; i++)                          
    {
        printf("# ");
    }
}
    

int main()
{
    int iValue = 0;

    printf("Enter number : ");                        //takes value from user                        
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}

/*
   Time Complexity : O(N)
*/  