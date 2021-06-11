void printAncestors(struct Node *root, int key)
{
    if (root == NULL) 
        return;

    stack<Node *> s;
    while (1)
    {
        while (root && root->data!=key)
        {
            s.push(root);   
            root = root->left;  
        }
        if (root && root->data==key)
            break;
        
        if (s.top()->right == NULL)
        {
            root = s.top();
            s.pop();
            while (s.size()>0 && s.top()->right == root){
                root = s.top();
                s.pop();;
            }
        }
        root = s.size()? NULL: s.top()->right;
    }
 
    while (s.size()){
        cout<<s.top();
        s.pop();
    }
}