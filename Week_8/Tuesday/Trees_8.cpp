// Print ancestor of given node in binary tree

class Solution{
    
    bool helper(Node *root,int target,vector<int> &res){
       if(!root)
        return false;
        
        if(root->data==target)
        return true;
        
        if(helper(root->left,target,res) || helper(root->right,target,res)){
            res.push_back(root->data);
        
            return true;            
        }
        
        return false;
    }
  public:
    // Function should return all the ancestor of the target node
    vector<int> Ancestors(struct Node *root, int target)
    {
         // Code here
         vector<int> res;
         helper(root,target,res);
         
         return res;
    }
};