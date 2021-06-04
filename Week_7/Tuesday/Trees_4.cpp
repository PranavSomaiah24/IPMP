class Solution
{
    public:
    //Function to check whether a Binary Tree is BST or not.
    int val=INT_MIN;
    bool isBST(Node* root) 
    {
        // Your code here
        if(root){
            if(!isBST(root->left))
                return false;
            
            if(root->data<=val)
                return false;
           
            val=root->data;
            
            if(!isBST(root->right))
                return false;
        }
        return true;
    }
};