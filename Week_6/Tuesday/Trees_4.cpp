void deleteTree(node *root){
    if(root){
        deleteTree(root->left);
        deleteTree(root->right);
        delete(root);
    }
}