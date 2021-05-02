class Solution{
public:	
	// Returns maximum repeating element in arr[0..n-1].
	// The array elements are in range from 0 to k-1
	int maxRepeating(int *arr, int n, int k) {
	    // code here
	    for(int i=0;i<n;i++){
	        arr[arr[i]%k]+=k;
	    }
	    
	    int max=INT_MIN,ans;
	    
	    for(int i=0;i<n;i++){
	        if(arr[i]>max){
	            max=arr[i];
	            ans=i;
	        }
	    }
	    
	    return ans;
	}

};