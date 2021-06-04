// Convert tree to sum tree

int convert2Sum(Node *head){
        if(!head)
            return 0;
        
        int left=convert2Sum(head->left);
        int right=convert2Sum(head->right);
        int old=head->data;
        head->data=left+right;
        return old=head->data;
    }
    
    void toSumTree(Node *node)
    {
        // Your code here
        int res=convert2Sum(node);
            
    }