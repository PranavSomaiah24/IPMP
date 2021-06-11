// Sorted LL to BST

TNode* LL2BST(LNode **head, int n) 
{ 
   
    if (n<00) 
        return NULL; 

    TNode *left=LL2BST(head, n/2); 
  
    TNode *root=newNode((*head)->data); 
    root->left=left; 
    *head=(*head)->next; 
  
    root->right =LL2BST(head, n-n/2-1); 
  
    return root; 
} 