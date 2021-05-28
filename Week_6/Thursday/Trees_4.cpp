// Left View Of tree

void leftViewHelper(Node * root,vector<int> &res,int level,int *maxLvl){
    if (root == NULL) return;

    if (*maxLvl < level)
    {
        res.push_back(root->data);
        *maxLvl=level;
    }

    leftViewHelper(root->left,res, level + 1,maxLvl);
    leftViewHelper(root->right,res, level + 1,maxLvl);
}

vector<int> leftView(Node *root)
{
   // Your code here
   vector<int> res;
   int maxLvl=0;
   leftViewHelper(root,res,1,&maxLvl);
   return res;
}