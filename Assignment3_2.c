#include<stdio.h>                                           // For Input Output

/////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name :       DisplayFactor
//    Description :         It is used to display even factors of a number
//    Input :               Integer
//    Output :              Even factors printed on screen
//    Author :              Raj Samir Jadhav
//    Date :                18/10/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////

void DisplayFactor(int iNo)             
{
    int i = 0;
    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    for(i = 1; i <= iNo / 2; i++)                 //
    {
        if((iNo % i == 0) && (i % 2 == 0))        //To check even number

        {
            printf("%d\t", i);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : \n");         //Takes value from user
    scanf("%d", &iValue);

    DisplayFactor(iValue);

    return 0;
}


/*
     time complexity : O(N)
*/