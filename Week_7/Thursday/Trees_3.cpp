// Convert tree to children sum tree without decrementing a nodes value

void convertTree(node* node) 
{ 
    int left = 0, right = 0, diff; 
    if (node == NULL || (node->left == NULL &&
                        node->right == NULL)) 
        return; 
    else
    { 
        convertTree(node->left); 
        convertTree(node->right); 
        if (node->left != NULL) 
        left = node->left->data; 
        if (node->right != NULL) 
        right = node->right->data; 
       
        diff = left + right - node->data; 
        if (diff > 0) 
        node->data = node->data + diff; 
      
        if (diff < 0) 
        fixSum(node, -diff); 
    } 
} 
  

void fixSum(node* node, int diff) 
{ 
    if(node->left != NULL) 
    { 
        node->left->data = node->left->data + diff; 
        fixSum(node->left, diff); 
    } 
    else if (node->right != NULL) 
    { 
        node->right->data = node->right->data + diff;   
        fixSum(node->right, diff); 
    } 
}