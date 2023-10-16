#ifndef NODE_H_HEADER_
#define NODE_H_HEADER_

typedef struct node
{
    int isoperator;
    int val;
    struct node *left;
    struct node *right;
} node;

node *createNode(int isoperator, int val, node *left, node *right)
{
    node *newnode = (node *)malloc(sizeof(node));
    newnode->isoperator = isoperator;
    newnode->val = val;
    newnode->left = left;
    newnode->right = right;
    return newnode;
}

void print(node *x)
{
    char arr[4] = {'+', '-', '*', '/'};
    if (x->isoperator)
    {
        int c = x->val ;
        if(c!=0 && c!=1 && c!=2 && c!=3)
            printf("Invalid character\n");
        else
            printf("%c ",arr[c]);
            
    }
    else
    {
        printf("%d ", x->val);
    }
}

void preorder(node *x)
{

    if (!x)  return;
    print(x);
    preorder(x->left);
    preorder(x->right);
}

void inorder(node *x)
{

    if (!x) return;
    inorder(x->left);
    print(x);
    inorder(x->right);
}

#endif