#include <stdio.h>                         // For Input Output
/////////////////////////////////////////////////////////////////////////////////////////////
//    Function Name :       ReadFullName
//    Description :         Accepts full name from user and displays it.
//    Input :               String
//    Output :              Displays the full name  
//    Author :              Raj Samir Jadhav
//    Date :                20/10/2025  
/////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    char Name[30];

    printf("Please enter full name\n");                // Accept Value from users
    scanf("%[^\n]s", Name); 

    printf("Your name is %s\n", Name);                 // Display the full name
    
    return 0;
}