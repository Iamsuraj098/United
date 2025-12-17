#include <stdio.h>
#include <stdlib.h>
typedef struct nodetype
{
    int data;
    struct nodetype *next;
} node;
node *head = NULL;
void insertion(int data)
{
    node *temp = (node *)malloc(sizeof(node));
    temp->data = data;
    if (head == NULL)
    {
        temp->next = NULL;
        head = temp;
        return;
    }
    temp->next = head;
    head = temp;
}
void insertionAtNthNode(int loc, int element)
{
    node *temp = (node *)malloc(sizeof(node));
    temp->data = element;
    node *temp1 = head;
    for (int i = 0; i < loc; i++)
    {
        temp1 = temp1->next;
    }
    temp->next = temp1->next;
    temp1->next = temp;
}
void print()
{
    node *temp = head;
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
    auto int n, element = 0;
    printf("enter the number of element: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Element: ");
        scanf("%d", &element);
        insertion(element);
        print();
    }
    auto int loc, x;
    printf("Enter the index (indexing from zero): ");
    scanf("%d", &loc);
    printf("enter the inserting element: ");
    scanf("%d", &x);
    insertionAtNthNode(loc, x);
    print();
    return 0;
}