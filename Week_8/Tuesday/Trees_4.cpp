// Print all root to leaf paths

void findPaths(Node *root,int arr[],int index,vector<vector<int>> &res){
     if(root){
         arr[index++]=root->data;
         
         if(!root->left && !root->right){
             vector<int> temp(arr,arr+index);
             res.push_back(temp);
         }else{
             findPaths(root->left,arr,index,res);
             findPaths(root->right,arr,index,res);
         }
         
     }
 }
 
 
vector<vector<int>> Paths(Node* root)
{
    // Code here
    vector<vector<int>> res;
    int arr[1000];
    findPaths(root,arr,0,res);
    
    return res;
}