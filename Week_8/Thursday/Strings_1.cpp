class Solution{
    public:
    int longestUniqueSubsttr(string str){
        int res=1;
        
        int i,j;
        
        vector<int> last(256,-1);
        
        for(j=0,i=0;j<str.size();j++){
           
            if(last[str[j]]>=i){
               i=last[str[j]]+1;
            }
            last[str[j]]=j;
            res=max(res,j-i+1);
        }
        
        return res;
        
    }   
};