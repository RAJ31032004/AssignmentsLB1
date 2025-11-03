#include <stdio.h>                // For Input Output

/////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name :       FactRev
//    Description :         Accept its numbera from user and display factors in decreasing order
//    Input :               Integer
//    Output :              Integer
//    Author :              Raj Samir Jadhav
//    Date :                19/10/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////

void FactRev(int iNo)                                                 // Function to display factors in reverse order
{
    int i = 0;
    
    if (iNo <= 0)
    {
        printf("Invalid input\n");
        return;
    }

    for (i = iNo / 2; i >= 1; i--)                                      // Loop from iNo/2 down to 1 to find and print factors in decreasing order
    {  
       
        if ((iNo % i) == 0)
        { 
            printf("%d\t", i); 
        }
    }
    
}

int main()
{
    int iValue = 0;
    
    printf("Enter number : \n");                                        // print prompt for user input
    scanf("%d", &iValue);
    
    FactRev(iValue);
    
    return 0;
}