#ifndef NODE_H_HEADER_
#define NODE_H_HEADER_
typedef struct node
{
    int isoperator;
    char type;
    int id;
    char expression[100];
    struct node *left;
    struct node *right;
} node;

node* dag[100];
int currentIndex = 0;

node *createNode(int id, int isoperator, char type, char expression[100], node *left, node *right)
{
    node *newnode = (node *)malloc(sizeof(node));
    newnode->id = id;
    newnode->isoperator = isoperator;
    newnode->type = type;
    strcpy(newnode->expression, expression);
    newnode->left = left;
    newnode->right = right;
    return newnode;
}

void inorder(node *x, int visited[])
{
  if(!x)
    return;

  if(visited[x->id])
    return;

  visited[x->id] = 1;

  inorder(x->left,visited);  
  printf("Node: %s\n", x->expression);
  inorder(x->right,visited);
}


void preorder(node *x, int visited[])
{
  if(!x)
    return;

  if(visited[x->id])
    return;

  visited[x->id] = 1;

  printf("Node: %s\n", x->expression);
  preorder(x->left,visited);
  preorder(x->right,visited);

}

void print(node *root)
{
    printf("\nResult\n");
    int visited[currentIndex];
    for (int i = 0; i < currentIndex; i++)
        visited[i] = 0;
    printf("Preorder: \n");
    preorder(root, visited);
    printf("\n");
    for (int i = 0; i < currentIndex; i++)
        visited[i] = 0;
    printf("\n\nInorder: \n");
    inorder(root, visited);
    printf("\n");
}


int checkIfExpressionExists(char expression[100])
{
    int i;
    for (int i = 0; i < currentIndex; i++)
    {
        if (strcmp(dag[i]->expression, expression) == 0)
        {
            return i;
        }
    }
    return -1;
}

void addToDAG(node *newNode)
{
    dag[currentIndex] = newNode;
    currentIndex++;
}

node *processOperationNode(char expression[100], int isoperator, char type, node *left, node *right)
{

    int index = checkIfExpressionExists(expression);

    if (index >= 0)
    {
        return dag[index];
    }
    else
    {
        node *newnode = createNode(currentIndex, isoperator, type, expression, left, right);
        addToDAG(newnode);
        return newnode;
    }
}
  
// ...
#endif

