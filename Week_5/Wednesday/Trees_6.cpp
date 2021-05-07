//Tree traversals

void printPostorder(struct Node* node)
{
    if (node == NULL)
        return;
 
    printPostorder(node->left);
    printPostorder(node->right);  
    cout << node->data << " ";
}
 
void printInorder(struct Node* node)
{
    if (node == NULL)
        return;
    printInorder(node->left); 
    cout << node->data << " ";
    printInorder(node->right);
}
 
void printPreorder(struct Node* node)
{
    if (node == NULL)
        return;
    cout << node->data << " ";
    printPreorder(node->left);
    printPreorder(node->right);
}