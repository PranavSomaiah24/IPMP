// Check if tree is balanced or not

bool isBalanced(node* root, int* height)
{
    int lh = 0, rh = 0;
    int l = 0, r = 0;
 
    if (root == NULL) {
        *height = 0;
        return 1;
    }
 
    l = isBalanced(root->left, &lh);
    r = isBalanced(root->right, &rh);
 
    *height = (lh > rh ? lh : rh) + 1;
 
    if (abs(lh - rh) >= 2)
        return 0;
    else
        return l && r;
}