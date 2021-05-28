class Solution{
  public:
 
    void helper(Node *root,int &evenSum,int &oddSum,int level){
        if(root){
            if(level%2==0)
                evenSum+=root->data;
            else
                oddSum+=root->data;
            
            helper(root->left,evenSum,oddSum,level+1);
            helper(root->right,evenSum,oddSum,level+1);
        }
    }
    int getLevelDiff(Node *root)
    {
       int evenSum=0,oddSum=0;
       helper(root,evenSum,oddSum,1);
       
       return oddSum-evenSum;
       
       
    }
};