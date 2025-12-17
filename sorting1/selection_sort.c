#include <stdio.h>
#include <stdlib.h>
void selection(int arr[], int size)
{   
    int temp;
    printf("\nAfter sorting: \n");
    for (int i = 0; i < size; i++)
    {   
        for (int j = 0; j < size; j++)
        {
            if (arr[0]>arr[i])
            {
                temp = arr[0];
                arr[0] = arr[j];
                arr[j] = temp;
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
    int *arr, size;
    printf("enter the size of array: ");
    scanf("%d", &size);
    arr = malloc(size * sizeof(int));
    printf("enter the array: \n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Array will be: \n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    selection(arr, size);
    free(arr);
    return 0;
}