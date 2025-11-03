#include <stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////
//    Function Name :       Display 
//    Description :         To display numbers from -N to N.
//    Input :               Integer
//    Output :              Void
//    Author :              Raj Samir Jadhav
//    Date :                20/10/2025
//////////////////////////////////////////////////////////////////////////////////////////////

void Display(int iNo)
{
    int iCnt = 0;

    if (iNo < 0)
    {
        iNo = -iNo; 
    }

    for (iCnt = -iNo; iCnt <= iNo; iCnt++)       // for loop to iterate from -iNo to iNo
    {
        printf("%d\t", iCnt); 
    }
 
}


int main()
{
    int iValue = 0;
    
    printf("Enter number: ");                  //takes value from user
    scanf("%d", &iValue);

    Display(iValue);                            // Function Call

    return 0;
}


/*
   Time Complexity : O(N)
*/