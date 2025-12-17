#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*next;
};
struct node*top = NULL;
void push(int element)
{
    struct node*temp = (struct node*)malloc(sizeof(struct node));
    temp->data = element;
    temp->next = top;
    top = temp;
}
void print()
{
    struct node*temp = (struct node*)malloc(sizeof(struct node));
    temp = top;
    printf("stack: ");
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}
void pop()
{
    struct node*temp = (struct node*)malloc(sizeof(struct node));
    temp = top;
    top = temp->next;
    free(temp);
}
int main()
{
    push(1);
    push(2);
    push(3);
    pop();
    print();
return 0;
}