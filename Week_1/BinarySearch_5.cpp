//Count no of occurences

class Solution{
public:	
	
	int leftOccurence(int arr[],int n,int x){
    int l=0,r=n-1,mid;
    
    while(l<=r){
        mid=l+(r-l)/2;
        
        if((mid==0 ||x>arr[mid-1])&&arr[mid]==x){
            return mid;
        }
        if(arr[mid]>=x){
            r=mid-1;
        }else{
            l=mid+1;
        }
    }
    return -1;
}
int rightOccurence(int arr[],int n,int x){
    int l=0,r=n-1,mid;
    
    while(l<=r){
        mid=l+(r-l)/2;
        
        if((mid==n-1 ||x<arr[mid+1])&&arr[mid]==x){
            return mid;
        }
        if(arr[mid]<=x){
            l=mid+1;
        }else{
            r=mid-1;
        }
    }
    return -1;

}
	
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
	int count(int arr[], int n, int x) {
	    int left=leftOccurence(arr,n,x);
	    if(left==-1){
	        return 0;
	    }
	    int right=rightOccurence(arr,n,x); 
	    return(right-left+1);
	}
};