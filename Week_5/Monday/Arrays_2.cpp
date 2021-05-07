class Solution{
	
	public:
	vector<int> downwardDigonal(int n, vector<vector<int>> A)
	{
		// Your code goes here
		vector<vector<int>> temp(2*n-1);
		vector<int> res;
		
		for(int i=0;i<n;i++){
		    for(int j=0;j<n;j++){
		        temp[i+j].push_back(A[i][j]);
		    }
		}
		
		for(int i=0;i<temp.size();i++){
		    for(int j=0;j<temp[i].size();j++){
            res.push_back(temp[i][j]);		    
		}
	}

    return res;
	}
};