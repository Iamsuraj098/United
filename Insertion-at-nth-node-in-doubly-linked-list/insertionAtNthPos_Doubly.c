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
void insertionAtNthPos(int loc, int data)
{
    node* temp = (node*)malloc(sizeof(node));
    temp->data = data;
    node* temp1 = head;
    node* temp2 = temp1->next;
    for (int i = 0; i < loc; i++)
    {
        temp1 = temp1->next;
        temp2 = temp2->next;
    }
    temp1->next = temp;
    temp->pre = temp1;
    temp->next = temp2;
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
    int loc;
    printf("enter the index: ");
    scanf("%d", &loc);
    printf("enter the inserting element: ");
    scanf("%d", &x);
    insertionAtNthPos(loc, x);
    print();
return 0;
}