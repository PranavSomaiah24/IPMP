// Check if tree is foldable

void mirror(Node* node)
    {
     // code here
     if(node){
         mirror(node->left);
         mirror(node->right);
         
         Node *temp=node->left;
         node->left=node->right;
         node->right=temp;
     }
    }
 
    
bool isSame(Node *l,Node * r){
    if(!l && !r)
        return true;
    
    if(l && r && isSame(l->left,r->left) && isSame(l->right,r->right) )
        return true;
    return false;
}
    
bool IsFoldable(Node* root)
{
    // Your code goes here
    if(!root)
        return true;
        
    mirror(root->left);
    
    return isSame(root->left,root->right);
    
}