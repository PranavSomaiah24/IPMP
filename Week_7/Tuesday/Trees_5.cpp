// Check if tree is Complete

bool isCompleteBT(Node* root){
        //code here
        queue<Node *> q;
        q.push(root);
        int flag1=false;
        while(!q.empty()){
            
            Node *t=q.front();
            q.pop();
            
            if(t->left){
                
                if(flag1==true)
                    return false;
                q.push(t->left);
                
            }else flag1=true;
            
            if(t->right){
                
                if(flag1==true)
                    return false;
                
                q.push(t->right);   
            }else flag1=true;
            
        }
        return true;
    }