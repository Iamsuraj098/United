#include <stdio.h>
#include <stdlib.h>
typedef struct nodetype
{
    int data;
    struct nodetype *left;
    struct nodetype *right;
} node;
node *newnode(int element)
{
    node *temp = (node *)malloc(sizeof(node));
    temp->data = element;
    temp->left = NULL;
    temp->right = NULL;
}
node *insertion(node *root, int element)
{
    if (root == NULL)
    {
        root = newnode(element);
        return root;
    }
    else if (element <= root->data)
    {
        root->left = insertion(root->left, element);
    }
    else
    {
        root->right = insertion(root->right, element);
    }
}
void CheckMax(node* root)
{
    node* temp = root;
    while (temp->right != NULL)
    {
        temp = temp->right;
    }
    printf("Max element: %d", temp->data);
}
void CheckMin(node* root)
{
    node* temp = root;
    while (temp->left != NULL)
    {
        temp = temp->left;
    }
    printf("Max element: %d", temp->data);
}
int main()
{
    node *root = NULL;
    int n = 0, element = 0;
    printf("Enter the number of element in tree: ");
    scanf("%d", &n);
    printf("Enter the element: \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &element);
        root = insertion(root, element);
    }
    CheckMax(root);
    CheckMin(root);
    return 0;
}