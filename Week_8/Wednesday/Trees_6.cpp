// Merge two Balanced BST

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

Node* DLL2BST(Node **head, int n) 
{ 
   
    if (n <= 0) 
        return NULL; 
    Node *left = DLL2BST(head, n/2); 

    Node *root = *head; 
    root->prev = left; 
    *head = (*head)->next; 

    root->next = DLL2BST(head, n-n/2-1); 
  
    return root; 
} 

Node *merge(Node *first, Node *second)
{
    /
    if (!first)
        return second;
    if (!second)
        return first;
 
    if (first->data < second->data)
    {
        first->next = merge(first->next,second);
        first->next->prev = first;
        first->prev = NULL;
        return first;
    }
    else
    {
        second->next = merge(first,second->next);
        second->next->prev = second;
        second->prev = NULL;
        return second;
    }
}

Node *mergeBST(Node* first, Node* second){
    first=bst2dll(first);
    second=bst2dll(second);

    first= merge(first,second);

    return DLL2BST(first);
}