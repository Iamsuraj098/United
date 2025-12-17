#include <stdio.h>
int main()
{
    int arr[50], n, count[50], x = 0, b[50], z= 0;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    b[0] = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != arr[i+1])
        {
            b[z+1] = arr[i+1];
            z++;
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (b[i] == arr[j])
            {
                x++;
            }
        }
        count[i] = x;
        x = 0;
    }
    for (int i = 0; i < z; i++)
    {
        printf("%d = %d\n",b[i], count[i]);
    }
    return 0;
}