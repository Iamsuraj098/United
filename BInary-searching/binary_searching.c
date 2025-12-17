#include <stdio.h>
#include <stdlib.h>
void linear(int arr[], int size, int element)
{
    int spot = 0, x = size, b = 0;

    for (int i = 0; i < size; i++)
    {
        if ((arr[0] == element) || (arr[size - 1] == element))
        {
            spot = 1;
            break;
        }
        else
        {
            x = (x + b - 1) / 2;
            if (arr[x] == element)
            {
                spot = 1;
                break;
            }
            else if (((arr[0] < element) && (element < arr[x])))
            {
                x = size = x + 1;
                printf("\n\t%d\n", x);
            }
            else if (((arr[x] < element) && (element < arr[size - 1])))
            {
                b = x;
                i = x - 1;
                x = size;
                printf("\n\t\t%d\n", x);
            }
        }
    }
    if (spot == 1)
    {
        printf("\nyes found");
    }
    else
    {
        printf("\nnot found");
    }
}
int main()
{
    int *arr, size, element, spot = 0, x;
    printf("enter the size of array: ");
    scanf("%d", &size);
    arr = malloc(size * sizeof(int));
    printf("enter the array: \n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("your array will be: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\nenter the finding element: ");
    scanf("%d", &element);
    linear(arr, size, element);
    free(arr);
    return 0;
}