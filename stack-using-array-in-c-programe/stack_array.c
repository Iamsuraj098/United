#include<stdio.h>
#define size 10
int arr[size];
int top = -1;
int is_stack_full()
{
    if (top >= size-1)
    {
        return 1;
    }
    return 0;
}
void push(int element)
{   
    int x = is_stack_full();
    if (x != 1)
    {
        arr[++top] = element;
    }
    else
    {
        printf("stack is full");
    }
}
void pop()
{
    if (top == -1)
    {
        printf("stack is empty");
    }
    else
    {
        --top;
    }
}
void print()
{   
    int i = 0;
    while (i <= top)
    {
        printf(" %d ", arr[i]);
        i++;
    }
    printf("\n");
}
int main()
{
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    push(6);
    push(7);
    push(8);
    push(9);
    push(10);
    print();
    //push(10);
    pop();
    pop();
    pop();
    pop();
    pop();
    pop();
    pop();
    pop();
    pop();
    pop();
    pop();
    print();

return 0;
}