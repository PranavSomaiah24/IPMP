// Reverse Level Order Traversal

vector<int> reverseLevelOrder(Node *root)
{
    // code here
    vector<int> res;
    queue<Node*> q;
    stack<int> s;
    q.push(root);
    
    while(!q.empty()){
        Node *t=q.front();
        s.push(t->data);
        q.pop();
        
        if(t->right)
            q.push(t->right);
            
        if(t->left)
            q.push(t->left);
    }
    while(!s.empty()){
        res.push_back(s.top());
        s.pop();
    }
    return res;
}