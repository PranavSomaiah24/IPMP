//Function to convert a binary tree into its mirror tree.

class Solution{
    public:
    void mirror(Node* node)
    {
     // code here
     if(node){
         mirror(node->left);
         mirror(node->right);
         
         Node *temp=node->left;
         node->left=node->right;
         node->right=temp;
     }
    }
};