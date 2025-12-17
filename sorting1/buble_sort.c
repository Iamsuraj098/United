#include <stdio.h>
void buble(int arr[], int size)
{
    int temp, n = 1;
    for (int j = 0; j < size; j++)
    {
        for (int i = 0; i < size - j - 1; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
    }
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}
int main()
{
    int arr[50], size;
    printf("Enter the size: ");
    scanf("%d", &size);
    printf("enter the element: \n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Array will be: \n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\nSorted array: \n");
    buble(arr, size);
    return 0;
}