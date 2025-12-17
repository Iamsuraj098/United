#include <stdio.h>
void fibbinici(int);
int a = 0, b = 1, c;
int main()
{
    int n;
    printf("enter the term: ");
    scanf("%d", &n);
    printf("0\t1\t");
    fibbinici(n);
    return 0;
}
void fibbinici(int n)
{
    if (n > 0)
    {
        if (n == 1)
        {
            printf("1");
            n = n-1;
        }
        else if  (n == 0)
        {
            printf("0");
            n = n - 1;
        }
        else if (n > 1)
        {
            c = a + b;
            a = b;
            b = c;
            printf("%d\t", c);
            n = n - 1;
            fibbinici(n);
        }
        else
            printf("enter the valid number. ");
    }
}
