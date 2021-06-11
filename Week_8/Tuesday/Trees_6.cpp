// Check if root to leaf path matches given Value

class Solution
{
    public:
    bool hasPathSum(Node *root, int S,int sum=0) {
    // Your code here
    if(root){
        sum+=root->data;
    
        if(!root->left && !root->right){
            if(sum==S)
                return true;
        }
        
        if(hasPathSum(root->left,S,sum) || hasPathSum(root->right,S,sum))
            return true;
    }
    return false;
}
};