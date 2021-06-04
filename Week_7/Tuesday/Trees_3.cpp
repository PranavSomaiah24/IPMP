// returns the inorder successor of the Node x in BST 

class Solution{
  public:
    
    
    Node *p=NULL;
    
    Node *succ(Node *root){
        if(root->left){
            return succ(root->left);
        }
        return root;
    }
    
    
    Node * inOrderSuccessor(Node *root, Node *x)
    {
        if(!root)
            return NULL;
        
        if(root->data==x->data){
            if(root->right){
                return succ(root->right);
            }
            return p;
        }
        
        if(root->data<x->data){
            return inOrderSuccessor(root->right,x);
        }
        
        p=root;
        return inOrderSuccessor(root->left,x);
        
    }
};