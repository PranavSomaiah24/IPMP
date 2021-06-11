// Remove all nodes which don’t lie in any path with sum>= k

Node *updateTree(Node *root,int k,int *sum){
    if(!root)
        return NULL;

    int *lsum=*sum +root->data;
    int *rsum=*lsum;

    root->left= updateTree(root->left,lsum);
    root->right=updateTree(root->right,rsum);

    *sum =max(*lsum,*rsum);

    if(*sum<k){
        delete(root);
        return NULL;
    }

    return root;
}