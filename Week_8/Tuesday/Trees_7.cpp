// Max Sum root to leaf path

void getTargetLeaf(node* root, int* maxSum,int curr)
{
    if (root == NULL)
        return;
    
    curr=curr+root->data;
    
    if (!root->left && !root->right) {
        if (curr > *maxSum) 
            *maxSum = curr;
    }

    getTargetLeaf(Node->left, maxSum, curr);
    getTargetLeaf(Node->right, maxSum, curr);
}