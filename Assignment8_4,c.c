#include <stdio.h>                                   // for input and output functions

void Table(int iNo)
{
    int iCnt = 0;

    int iNum = iNo;
    if (iNum < 0)
    {
        iNum = -iNum; 
    }
    
    if (iNum == 0)
    {
        printf("0\t0\t0\t0\t0\t0\t0\t0\t0\t0\n");
        return;
    }

    for (iCnt = 1; iCnt <= 10; iCnt++)               // for loop to iterate from 1 to 10
    {
        int iMultiple = iNum * iCnt;
    
        printf("%d\t", iMultiple); 
    }

}

int main()
{
    int iValue = 0;
    
    printf("Enter number: ");                        //takes value from user
    scanf("%d", &iValue);

    Table(iValue);

    return 0;
}

/*
   Time Complexity : O(1)
*/