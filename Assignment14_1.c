#include<stdio.h>                            //For input and output

/////////////////////////////////////////////////////////////////////////////////
//    Function Name :       DisplayDigits
//    Description :         Take input from user and display its digit order
//    Input :               Integer
//    Output :              integer
//    Author :              Raj Samir Jadhav
//    Date :                25/10/2025
/////////////////////////////////////////////////////////////////////////////////

void DisplayDigit(int iNo)
{
    int iDigit = 0;

    if(iNo == 0)
    {
        printf("0\n");
        return;
    }

    
    if(iNo < 0)                                // Handle negative numbers
    {
        iNo = -iNo;
    }

    




    while(iNo != 0)                             // Loop until all digits are extracted
    {
        iDigit = iNo % 10; 
        
        printf("%d\n",iDigit);

        iNo = iNo / 10; 
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number: \n");                    // to take number from user
    scanf("%d", &iValue);

    DisplayDigit(iValue);

    return 0;
}

/*
     Time Complexity: O(N)
*/