// Check if sum tree

class Solution
{
    public:
    bool isSumTree(Node* root)
    {
         // Your code here
         
         if(!root)
            return true;
        
        if(isSumTree(root->left) && isSumTree(root->right)){
            
            if(!root->left && !root->right)
                return true;
            int l=0,r=0;
            if(root->left){
                if(!root->left->left && !root->left->right)
                    l=root->left->data;
                else
                    l=2*root->left->data;
            }
            if(root->right){
                if(!root->right->left && !root->right->right)
                    r=root->right->data;
                else
                    r=2*root->right->data;
            }
                
            if(root->data==l+r)
                return true;
                
            
        }
        return false;
    }
};