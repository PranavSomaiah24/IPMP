// Print Nodes at k distance

void helper(Node *root,int k,vector<int> &res){
    if(root){
        if(k==0){
            res.push_back(root->data);
        }
        helper(root->left,k-1,res);
        helper(root->right,k-1,res);
    }
}

vector<int> Kdistance(struct Node *root, int k)
{
  // Your code here
  vector<int> res;
  
  helper(root,k,res);
  return res;
}