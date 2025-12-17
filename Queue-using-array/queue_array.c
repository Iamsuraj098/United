#include <stdio.h>
#define size 10
int arr[size];
int rear = 0;
int front = 1;
int OverFlowcheck()
{
    if (rear <= size)
        return 1;
    else
        return 0;
}
void inqueue(int element)
{
    int x = OverFlowcheck();
    if (x == 1)
    {
        arr[++rear] = element;
    }
}
void dequeue()
{
    if (rear == 0)
        return;
    else
    {   
        printf("Removed element: %d\n", arr[front]);
        ++front;
    }
}
void print()
{   
    printf("Queue: ");
    for (int i = front; i <= rear; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main()
{
    inqueue(1);
    inqueue(2);
    inqueue(3);
    print();
    dequeue();
    print();
    return 0;
}
