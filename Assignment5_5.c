#include <stdio.h>                                      // For Input Output

int FindLargest(int x, int y, int z)                   // Function to find the largest of three numbers
{
    
    if (x >= y && x >= z)                             // Checks whether x is the largest
    {
        return x;
    }
    else if (y >= x && y >= z)                        // Checks whether y is the largest
    {
        return y;
    }
    else
    {
        return z;
    }
}

int main()
{
    int a, b, c, result;
    
    printf("Enter three numbers: ");                    // Accept Value from users
    scanf("%d %d %d", &a, &b, &c);
    
    result = FindLargest(a, b, c);
    
    printf("Largest number is: %d\n", result);
    
    return 0;
}


/*
   Time Complexity : O(N)
*/