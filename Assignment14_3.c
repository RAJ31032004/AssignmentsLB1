#include<stdio.h>                              // for input and output

////////////////////////////////////////////////////////////////////////////////
//    Function Name :       CountTwo
//    Description :         Take input from user and counts frequency of 2 in it
//    Input :               Integer
//    Output :              True or False
//    Author :              Raj Samir Jadhav
//    Date :                25/10/2025
///////////////////////////////////////////////////////////////////////////////

int CountTwo(int iNo)                          
{
    int iDigit = 0;
    int iCount = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    
    while(iNo != 0)                            // Loop until all digits are checked
    {
        iDigit = iNo % 10;                     //  Get the last digit

       
        if(iDigit == 2)                         // Check if the digit is 2
        {
            iCount++;                           // Increment the counter
        }

       
        iNo = iNo / 10;                         //  Remove the last digit to move to the next one
    }

    return iCount;
}

int main()
{
    int iValue = 0;
    int iRet = 0;   

    printf("Enter number: ");                   //take input from user
    scanf("%d",&iValue);

    iRet = CountTwo(iValue);

    printf("%d\n",iRet);                         // Added a newline for clearer output

    return 0;
}

/*
   Time Complexity : O(N)
*/