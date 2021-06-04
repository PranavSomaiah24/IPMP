//Convert a BST to a Binary Tree such that sum of all greater keys is added to every key

void helper(Node *root,int *sum){
    if(root){
        helper(root->right,sum);
        
        int t=*sum;
        *sum+=root->data;
        root->data+=t;
        
        helper(root->left,sum);
    }
}

Node* modify(Node *root)
{
    // Your code here
    int sum=0;
    helper(root,&sum);
    return root;
}