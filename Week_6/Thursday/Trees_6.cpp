// Double Tree

void convertToDoubleTree(Node *root){

    if(root){
        convertToDoubleTree(root->left);
        convertToDoubleTree(root->right);
        Node temp = new Node(root->data);
        temp->left=root->left;
        root->left=temp;
    }

}