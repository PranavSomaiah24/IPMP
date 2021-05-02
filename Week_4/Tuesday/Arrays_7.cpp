class Solution
{   
    public: 
    //Function to return a list of integers denoting spiral traversal of matrix.
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        // code here 
        vector<int> res(r*c);
        int x=0;
    int rc=c-1,lc=0,ur=0,lr=r-1;
    
    while(x<r*c){
        if(!(x<r*c))
            break;
        for(int i=lc;i<=rc;i++){
            res[x]=matrix[ur][i];
            x++;
        }
        ur++;
        if(!(x<r*c))
            break;
        for(int i=ur;i<=lr;i++){
            res[x]=matrix[i][rc];
            x++;
        }
        rc--;
        
        
        if(lc>rc)
            break;
        for(int i=rc;i>=lc;i--){
            res[x]=matrix[lr][i];
            x++;
        }
        
        lr--;
        
        if(ur>lr)
            break;
        
        for(int i=lr;i>=ur;i--){
            res[x]=matrix[i][lc];
            x++;
        }
        
        lc++;
        
        
    }
    return res;
    }
};