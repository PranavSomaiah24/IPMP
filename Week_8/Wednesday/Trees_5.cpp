// Sorted DLL to BST in-place

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