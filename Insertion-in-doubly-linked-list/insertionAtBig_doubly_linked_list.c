#include<stdio.h>
#include<stdlib.h>
typedef struct nodetype
{
    struct nodetype* pre;
    int data;
    struct nodetype* next;
}node;
node*head = NULL;
node*tail = NULL;
void insertionAtBeginning(int data)
{
    node* temp = (node*)malloc(sizeof(node));
    temp->data = data;
    if ((head == NULL)&&(tail == NULL))
    {
        temp->pre = head;
        temp->next = tail;
        head = temp;
        return;
    }
    temp->pre = head;
    temp->next = head;
    head = temp;
}
void print()
{
    node*temp = head;
    printf("List: ");
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}
int main()
{
    int n, x=0;
    printf("enter the nnumber of element: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Element: ");
        scanf("%d", &x);
        insertionAtBeginning(x);
        print();
    }
return 0;
}