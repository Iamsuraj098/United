#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
typedef struct nodetype
{
    int data;
    struct nodetype *left;
    struct nodetype *right;
} node;
node *getnode(int element)
{
    node *temp = (node *)malloc(sizeof(node));
    temp->data = element;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}
node *insertion(node* root, int element)
{
    if (root == NULL)
    {
        root = getnode(element);
        // printf(" %d ", root->data);
        return root;
    }
    else if (element <= root->data)
        root->left = insertion(root->left, element);
    else
        root->right = insertion(root->right, element);
}
bool search(node* root, int element)
{
    if (root == NULL) return false;
    if (root->data == element) return true;
    else if (root->data < element)
        return search(root->right, element);
    else
        return search(root->left, element);
}
int main()
{
    int x=0;
    node *root = NULL;
    root = insertion(root, 10);
    root = insertion(root, 11);
    root = insertion(root, 12);
    root = insertion(root, 13);
    printf("Enter the element be searched: ");
    scanf("%d", &x);
    if (search(root, x) == true)
        printf("Found");
    else
        printf("not found");
    return 0;
}