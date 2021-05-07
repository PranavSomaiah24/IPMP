class Solution
{
    public:
    //Function to get the maximum width of a binary tree.
    
    int height(Node *node){
        if(!node)
            return 0;
            
        return max(height(node->left),height(node->right))+1;
    }
    
    void getWidth(Node *node,int c[],int level){
        
        if(node){
            c[level]++;
            getWidth(node->left,c,level+1);
            getWidth(node->right,c,level+1);
            
        }
        
    }
    
    int getMaxWidth(Node* root)
    {
        if(!root)
            return 0;
        
        int h=height(root);
        int c[h]={0},level=0;
        
        getWidth(root,c,level);
        
        int max=INT_MIN;
        for(int i=0;i<h;i++){
            if(c[i]>max)
                max=c[i];
        }
        return max;
       // Your code here
    }
};