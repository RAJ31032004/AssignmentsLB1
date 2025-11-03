#include <stdio.h>                     // for input and output functions

void TableRev(int iNo)
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

    for (iCnt = 10; iCnt >= 1; iCnt--)
    {
        
        int iMultiple = iNum * iCnt;
        
        printf("%d\t", iMultiple); 
    }

    
    printf("\n"); 
}

int main()
{
    int iValue = 0;
    
    printf("Enter number: ");
    scanf("%d", &iValue);

    TableRev(iValue);

    return 0;
}

