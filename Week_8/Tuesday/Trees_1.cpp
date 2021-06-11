// Print BST values in range

void printBST(Node *root, vector<int> &res,int l,int h){
    if(root){
        printBST(root->left,res,l,h);
        if(root->data>=l && root->data<=h)
            res.push_back(root->data);
        printBST(root->right,res,l,h);
    }
}

vector<int> printNearNodes(Node *root, int low, int high)
{
  // your code goes here   
  vector<int> res;
  printBST(root,res,low,high);
  return res;
}