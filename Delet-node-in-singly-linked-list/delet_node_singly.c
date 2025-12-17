#include<stdio.h>
#include<stdlib.h>
typedef struct nodetype
{
    int data;
    struct nodetype* next;
}node;
node* head = NULL;
void insertion(int element)
{
    node* temp = (node*)malloc(sizeof(node));
    temp->data = element;
    temp->next = NULL;
    if (head == NULL)
    {
        head = temp;
        return;
    }
    node* temp1 = head;
    while (temp1->next != NULL)
        temp1 = temp1->next;
    temp1->next = temp;
}
void delet_node(int loc)
{
    node* temp = (node*)malloc(sizeof(node));
    temp = head;
    node* temp1 = head;
    for (int i = 0; i < loc; i++)
    {
        temp = temp->next;
        if (i > 0)
            temp1 = temp1->next;
    }
    if (loc == 0)
    {
        head = head->next;
        return;
    }
    temp1->next = temp->next;
    free(temp);
}
void print()
{
    node* temp = head;
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
    int n,element;
    printf("enter the number of element: ");
    scanf("%d", &n);
    printf("Enter the element:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &element);
        insertion(element);
    }
    print();
    int x;
    printf("enter the deleting element index: ");
    scanf("%d", &x);
    delet_node(x);
    print();
return 0;
}