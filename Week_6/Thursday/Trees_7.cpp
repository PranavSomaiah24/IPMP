// Zig-Zag traversal

vector <int> zigZagTraversal(Node* root)
{
	// Code here
	stack<Node*> left,right;
	left.push(root);
	vector<int>res;
	while(!left.empty() || !right.empty()){
	    
	    while(!left.empty()){
	        Node *t=left.top();
	        left.pop();
	        res.push_back(t->data);
	        if(t->left)
	            right.push(t->left);
	        
	        if(t->right)
	            right.push(t->right);
	    }
	    
	    while(!right.empty()){
	        Node *t=right.top();
	        right.pop();
	        res.push_back(t->data);
	        if(t->right)
	            left.push(t->right);
	        
	        if(t->left)
	            left.push(t->left);
	    }
	    
	}
	return res;
}