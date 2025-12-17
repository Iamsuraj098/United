#include<stdio.h>
#include<string.h>
int main()
{
    char arr[100];
    int size, x[25],temp;
    printf("enter the character array: ");
    gets(arr);
    size = strlen(arr);
    for (int j = 0; j < size; j++)
    {
        x[j] = arr[j];
    }
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (x[i] < x[j])
            {
                temp = x[i];
                x[i] = x[j];
                x[j] = temp; 
            }
            
        }
        
    }
    for (int i = 0; i < size; i++)
    {
        printf("%c", x[i]);
    }
    
return 0;
}