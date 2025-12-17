#include <stdio.h>
#include <math.h>
int main()
{
    // int a = 1<<2;  // m<<n = m*2^n
    // int a = 0<<1;
    // printf("%d", a);
    int a[50], n, size, j, i;
    printf("enter the number of element: ");
    scanf("%d", &n);
    printf("A = \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    size = pow(2, n);
    printf("Power set of A set: ");
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i & (1 << j))
            {
                printf("%d ", a[j]);
            }
        }
        printf("\n");
    }
    // char a[10] = {'a', 'b', 'c'};
    // int n, i, j;
    // int p_size = pow(2, 3);
    // for (int i = 0; i < p_size; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         if (i&(1<<j))
    //         {
    //             printf("%c", a[j]);
    //         }
            
    //     }
    //     printf("\n");
    // }
    return 0;
}