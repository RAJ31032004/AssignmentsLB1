#include<stdio.h>                     //for input output
////////////////////////////////////////////////////////////////////////////////////////////
/// 
/// Function Name : CheckVowel
/// Description :   To checck whether the letter is vowel or not
/// Input :         letters
/// Output :        letter is vowel or not
/// Author :        Raj Samir Jadhav
/// Date :          09/10/2025
///
/////////////////////////////////////////////////////////////////////////////////////////////

typedef int BOOL; 

#define TRUE 1                           // gets 1 if its true                 
#define FALSE 0                          // gets 0 if its false


BOOL CheckVowel (char cValue)            // function to check vowel
{
   
    if(cValue == 'a' || cValue == 'e' || cValue == 'i' || cValue == 'o' || cValue == 'u' || 
       cValue == 'A' || cValue == 'E' || cValue == 'I' || cValue == 'O' || cValue == 'U')                 //Lowercase and uppercase vowels
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter character : \n");
    scanf("%c", &cValue);
    
    bRet = CheckVowel(cValue); 

    if (bRet == TRUE) 
    {
        printf("It is Vowel");
    }
    else
    {
        printf("It is not Vowel");
    }
    
    return 0;
}


/*
  Time Complexity : O(Ns)
*/