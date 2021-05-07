int getSize(Node* node)
{
   // Your code here
   if(!node)
    return 0;
    
    return getSize(node->left)+getSize(node->right)+1;
}