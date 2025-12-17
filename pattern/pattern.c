#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int n,x;
    scanf("%d", &n);
    // Complete the code to print the pattern.
    for (int i = 0; i < 2 * n - 1; i++)
    {
        for (int j = 0; j < 2 * n - 1; j++)
        {
            if ((((2 * n - 1 - i) > j) && (i <= j)))
            {
                printf("%d ", n - i);
            }
            else if ((((2 * n - 2 - i) <= j) && (i >= j)))
            {
                printf("%d ", (i+2-n));
            }
            else
            {
                if (i>j)
                {
                    printf("%d ", n-j);
                }
                else
                {
                    printf("%d ", j+2-n);
                }
                
            }
        }
        printf("\n");
    }
    return 0;
}