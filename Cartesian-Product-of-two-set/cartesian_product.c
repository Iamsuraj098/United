#include <stdio.h>
#include <string.h>
void cartesian_product(char a[], char b[], int n, int m)
{
    printf("AxB: ");
    printf("{");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            printf("(%c , %c) ", a[i], b[j]);
    }
    printf("}\n");
    printf("BxA: ");
    printf("{");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            printf("(%c , %c) ", b[i], a[j]);
    }
    printf("}");
}
int main()
{
    int n, m;
    printf("enter the size of first array: ");
    scanf("%d", &n);
    char a[n];
    printf("Enter the set element: \n");
    for (int i = 0; i < n; i++)
        scanf("%s", &a[i]);
    printf("Enter the size of second array: ");
    scanf("%d", &m);
    char b[m];
    printf("Enter the set element: \n");
    for (int i = 0; i < n; i++)
        scanf("%s", &b[i]);
    cartesian_product(a, b, n, m);
    return 0;
}