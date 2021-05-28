class Solution{
  public:
    /*You are required to complete this method*/
    int checkLvl=0;
    bool check(Node *root,int currLevel=1)
    {   
        if(root){
            if(root->left==NULL && root->right==NULL){
                if(checkLvl==0)
                    checkLvl=currLevel;
                else
                    if(currLevel!=checkLvl)
                        return false;
            }else{
            if(!check(root->left,currLevel+1))
                return false;
            if(!check(root->right,currLevel+1))
                return false;
            }
        }
        return true;
    }
};