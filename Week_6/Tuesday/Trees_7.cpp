// Spiral Traversal

vector<int> findSpiral(Node *root)
{   vector<int>res;
    //Your code here
    if(!root){
    return res;
    }
    stack<Node*> left,right;
	right.push(root);

	while(!left.empty() || !right.empty()){
	    
	    while(!right.empty()){
	        Node *t=right.top();
	        right.pop();
	        res.push_back(t->data);
	        if(t->right)
	            left.push(t->right);
	        
	        if(t->left)
	            left.push(t->left);
	    }
	    
	    while(!left.empty()){
	        Node *t=left.top();
	        left.pop();
	        res.push_back(t->data);
	        if(t->left)
	            right.push(t->left);
	        
	        if(t->right)
	            right.push(t->right);
	    }
	    
	    
	}
	return res;
}