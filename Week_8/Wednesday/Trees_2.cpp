//Inorder to DLL

node* bst2dllHelper(node* root, node** head, node** tail)
{
    if (root == NULL)
        return NULL;
 
    node* left=root->left;
    node* right=root->right;
 
    bst2dllHelper(root->left, head, tail);
 
    if (*head==NULL) {
        *head=root;
    }
    root->left = *tail;
    if (*tail!=NULL) {
        (*tail)->right=root;
    }
    *tail = root;
    bst2dllHelper(root->right, head, tail);
 
    return root;
}
 


node* bst2dll(node* root)
{
    if (root == NULL)
        return root;
 
    node* head = NULL;
    node* tail = NULL;
 
    bst2dllHelper(root, &head, &tail);
 
    return head;
}