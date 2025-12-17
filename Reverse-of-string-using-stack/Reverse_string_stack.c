#include <stdio.h>
#define size 10
char arr[size];
int top = -1;
int isempty()
{
    if (top < size - 1)
        return 1;
    else
        return 0;
}
void push(char element)
{
    int check = isempty();
    if (check == 1)
        arr[++top] = element;
    else
        return;
}
void printreverse()
{
    printf("Reverse: ");
    int i = top;
    while (i > -1)
    {
        printf("%c", arr[i]);
        i--;
    }
}
int main()
{
    int n;
    printf("enter the size of string: ");
    scanf("%d", &n);
    char element;
    printf("enter the string:");
    for (int i = 0; i <= n; i++)
    {
        scanf("%c", &element);
        push(element);
    }
    printreverse();
    return 0;
}