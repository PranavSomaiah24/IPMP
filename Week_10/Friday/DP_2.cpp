// LIS problem

int LISS(node *root)
{
    if (root == NULL)
        return 0;
 
    if (root->liss)
        return root->liss;
 
    if (root->left == NULL && root->right == NULL)
        return (root->liss = 1);
    
    int excl = LISS(root->left) + LISS(root->right);
 
    int incl = 1;
    if (root->left)
        incl += LISS(root->left->left) + LISS(root->left->right);
    if (root->right)
        incl += LISS(root->right->left) + LISS(root->right->right);
 
    root->liss = max(incl, excl);
 
    return root->liss;
}