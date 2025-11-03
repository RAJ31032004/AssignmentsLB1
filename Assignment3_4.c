#include<stdio.h>                                                           //For input and output
////////////////////////////////////////////////////////////////////////////////////////////
/// 
/// Function Name : DisplayConvert
/// Description :   Takes character from user and convert it from lowercase to uppercase and uppercase to lowercase
/// Input :         letters
/// Output :        letters
/// Author :        Raj Samir Jadhav
/// Date :          09/10/2025
///
/////////////////////////////////////////////////////////////////////////////////////////////


void DisplayConvert(char cValue)
{
    if(cValue >= 'a' && cValue <= 'z')           //Checks if the Character is lowercase
    {
        printf("%c\n", cValue - 32);            // Converts to uppercase
    }
    else if(cValue >= 'A' && cValue <= 'Z')     // Checks if the character is uppercase
    {
        printf("%c\n", cValue + 32);            //Convrts to lowercase
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter character\n");
    scanf("%c", &cValue);
    
    DisplayConvert(cValue);                      //Function

    return 0;
}