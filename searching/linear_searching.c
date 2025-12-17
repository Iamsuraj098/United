#include<stdio.h>
int main()
{
    int arr[50], n, x, flag = 0;
    printf("enter the array size: ");
    scanf("%d", &n);
    printf("enter the array element: \n");
    for (int i = 0; i < n; i++)
    {
            scanf("%d", &arr[i]);
    }
    printf("Array will be: \n");
    for (int i = 0; i < n; i++)
    {
            printf("%d ", arr[i]);
    }
    printf("enter searching element: ");
    scanf("%d", &x);
    for (int i = 0; i < n; i++)
    {
            if (arr[i] == x)
                flag = 1;
    }
    if (flag == 1)
        printf("####   element found  #####");
    else
        printf("element not found");
return 0;
}