// Boundary Traversal

class Solution {
public:

    void leftBoundary(Node * root,vector<int> &res){
        
        if(root){
            if(root->left!=NULL){
            res.push_back(root->data);
            leftBoundary(root->left,res);
            }else 
            if(root->right!=NULL){
                res.push_back(root->data);
                leftBoundary(root->right,res);
            }
        }
        
    }
    void leafNodes(Node * root,vector<int> &res){
    
        if(root){
            if(!root->left && !root->right){
                res.push_back(root->data);
            }
            leafNodes(root->left,res);
            leafNodes(root->right,res);
        }
        
    }
    void rightBoundary(Node * root,vector<int> &res){
        
        if(root){
             if(root->right!=NULL){
                rightBoundary(root->right,res);
                res.push_back(root->data);
            }else if(root->left!=NULL){
                rightBoundary(root->left,res);
                res.push_back(root->data);
            }
        }
        
    }
    vector <int> printBoundary(Node *root)
    {
        //Your code here
        vector<int> res;
        res.push_back(root->data);
        leftBoundary(root->left,res);
        leafNodes(root,res);
        rightBoundary(root->right,res);

        return res;
        
    }
};