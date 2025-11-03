#include<stdio.h>                // For Input Output
////////////////////////////////////////////////////////////////////////////////////////////
/// 
/// Function Name : Accept
/// Description :   To accept one number from user and print that many asterisks
/// Input :         Integer
/// Output :        Number of asterisks get print on screen
/// Author :        Raj Samir Jadhav
/// Date :          09/10/2025
///
/////////////////////////////////////////////////////////////////////////////////////////////


void Accept(int iNo)        //  Function 
{
    int iCnt = 0;

    
    for(iCnt = 1 ; iCnt <= iNo ; iCnt++)          
    {
        printf("*");
    }
}

int main()
{
    int iValue = 0;
    
    printf("Enter a number: ");    //Take Value from the user
    scanf("%d", &iValue);
    Accept(iValue);
    return 0;
}


/*
      Time Complexity   :   O(N)
*/

