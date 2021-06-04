// Return the Kth smallest element in the given BST

class Solution{
  public:
    int ans=-1;
    
    void helper(Node *root,int *k){
        if(root){
            helper(root->left,k);
            if(*k==1)
                ans=root->data;
            (*k)--;
            helper(root->right,k);
        }
    }
    
    int KthSmallestElement(Node *root, int K)
    {
        //add code here.
        helper(root,&K);
        return ans;
    }
};