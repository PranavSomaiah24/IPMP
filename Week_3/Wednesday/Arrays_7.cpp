// Find pair of numbers with given sum X

class Solution{
public:	
	// Function to check if array has 2 elements
	// whose sum is equal to the given value
	bool hasArrayTwoCandidates(int arr[], int n, int x) {
	    // code here
	    unordered_set<int> hash;
	    for(int i=0;i<n;i++){
	        if(hash.find(x-arr[i])!=hash.end())
	            return true;
            else
                hash.insert(arr[i]);
	    }
	    return false;
	}
};