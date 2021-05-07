
class Solution
{
    public:
    
    int helper(Node* node,int &h){
         if(!node){
            h=0;
            return 0;
        }
        int lh=0;
        int rh=0;
        
        int ld=helper(node->left,lh);
        int rd=helper(node->right,rh);
        
        h=max(lh,rh)+1;
        return max(lh+rh+1,max(ld,rd));
    }
    
    
    int diameter(Node* node)
    {
        int height=0;
        return helper(node,height);
        
    }

};