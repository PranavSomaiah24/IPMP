//Row with max 1s

class Solution{
public:
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    int j,index;
	    for(j=0;j<m;j++)
	        if(arr[0][j]==1)
	            break;
	    if(j==m){
	        j=m-1;
	        index=-1;
	    }
	   else{
	        j--;
	    index=0;}
	    
	   for (int i =1;i<n;i++)
        {
            while (j>=0 && arr[i][j]==1)
            {
               j = j-1;
               index = i;  
            }
        }
	    return index;
	}

};