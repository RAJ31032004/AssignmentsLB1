#include<stdio.h>                               // For Input Output
/////////////////////////////////////////////////////////////////////////////////////////////
//    Function Name :       PrintEven
//    Description :         It is used to print even numbers
//    Input :               Integer
//    Output :              Even numbers printed on screen
//    Author :              Raj Samir Jadhav
//    Date :                18/10/2025
//  

void PrintEven(int iNo)          
{
    int iCnt = 0;               
    int iEven = 2; 

    if(iNo <= 0)                               // Filter for invalid input
    {
        return;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)         // Loop to print even numbers     
    {
        printf("%d\t", iEven); 
        iEven = iEven + 2;     
    } 
}

int main()
{
    int iValue = 0;

    printf("Enter number : \n");                  //Takes value from user  
    scanf("%d", &iValue);                      

    PrintEven(iValue);

    return 0;
}


/*
      Time Complexity   :   O(N)
*/