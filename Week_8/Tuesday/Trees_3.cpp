// Remove BST nodes outside range

Node *rangeBST(Node *root,int l,int h){
    if(!root)
        return NULL;
    root->left=rangeBST(root->left,l,h);
    root->right=rangeBST(root->right,l,h);

    if(root->data<l){
        Node *temp=root->right;
        delete root;
        return temp;
    }else if(root->data>h){
        Node *temp=root->left;
        delete root;
        return temp;
    };
    return root
}