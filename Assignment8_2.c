#include <stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////
//    Function Name :       Display 
//    Description :         To display the number in words if it is a single digit.
//    Input :               Integer
//    Output :              Void
//    Author :              Raj Samir Jadhav
//    Date :                20/10/2025
///////////////////////////////////////////////////////////////////////////////////////////////

void Display(int iNo)
{
    if (iNo > 9 || iNo < -9)                                               // Check if the number is not a single digit
    {
        printf("Invalid Number\n");
        return; 
    }

    int iDigit = iNo;
    if (iDigit < 0)
    {
        iDigit = -iDigit;                                                   // Convert negative digit to positive
    }

    switch(iDigit)
    {
        case 0:
            printf("Zero\n");
            break;
        case 1:
            printf("One\n");
            break;
        case 2:
            printf("Two\n");
            break;
        case 3:
            printf("Three\n");
            break;
        case 4:
            printf("Four\n");
            break;
        case 5:
            printf("Five\n");
            break;
        case 6:
            printf("Six\n");
            break;
        case 7:
            printf("Seven\n");
            break;
        case 8:
            printf("Eight\n");
            break;
        case 9:
            printf("Nine\n");
            break;
    }

}

int main()
{
    int iValue = 0;
    
    printf("Enter number: ");                  //takes value from user
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}

/*
   Time Complexity : O(1)
*/