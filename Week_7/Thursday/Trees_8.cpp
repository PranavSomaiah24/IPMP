// Check for pair sum in BST

class Solution{
  public:
    // root : the root Node of the given BST
    // target : the target sum
    unordered_set<int> hash;
    int ans=0;
    
    void helper(Node *root,int target){
        if(root){
            helper(root->left,target);
            
            if(hash.find(target-root->data)!=hash.end())
                ans=1;
            else{
                hash.insert(root->data);
            }
            
            
            helper(root->right,target);
        }
    }
    
    int isPairPresent(struct Node *root, int target)
    {
    //add code here.
        helper(root,target);
        return ans;
    }
};