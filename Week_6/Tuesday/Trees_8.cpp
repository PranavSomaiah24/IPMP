// Horizontal Sum

class Solution{
  public:
  
    void helper(Node *root, int hd,map<int,int> &hm){
        
        if(root){
            hm[hd]+=root->data;
            helper(root->left,hd-1,hm);
            helper(root->right,hd+1,hm);
        }
        
    }
    
    vector <int> verticalSum(Node *root) {
        // add code here.
        vector<int> res;
        
        map<int,int> hm;
        
        helper(root,0,hm);
        
        for(auto i:hm){
            res.push_back(i.second);
        }
        return res;
    }
};