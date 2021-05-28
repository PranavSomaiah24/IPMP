class Solution
{
	public:
	    void swap(char &a,char &b){
	        char t=b;
	        b=a;
	        a=t;
	    }
	    
	    void permute(string s,int l,int r,vector<string> &res){
	            
	       if(l==r)
	           res.push_back(s);
	       
	       for(int i=l;i<=r;i++){
	           swap(s[l],s[i]);
	           permute(s,l+1,r,res);
	           swap(s[l],s[i]);
	       } 
	    }
	    
		vector<string>find_permutation(string s)
		{
		    // Code here there
		    vector<string> res;
		    permute(s,0,s.size()-1,res);
		    return res;
		}
};