//Move all 0s to end of array

class Solution{
public:
	void pushZerosToEnd(int arr[], int n) {
	    // code here
	    
	    int j=-1,i=0,temp;
	    while(i<n){
	        if(arr[i]!=0){
	            j++;
	            temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
	        }
	    
	        i++;
	    }
	    
	}
};