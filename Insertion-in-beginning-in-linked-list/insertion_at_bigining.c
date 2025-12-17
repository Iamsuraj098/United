#include <stdio.h>
#include <stdlib.h>
typedef struct nodetype
{
    int data;
    struct nodetype *next;
} node;
node *head = NULL;
void insertionatbigining(int data)
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
    int n, element=0;
    printf("enter the numkber of element: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {   
        printf("Element: ");
        scanf("%d", &element);
        insertionatbigining(element);
        print();
    }
    
    return 0;
}