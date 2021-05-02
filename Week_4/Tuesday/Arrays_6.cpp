// Shuffle an array in O(N) time

void randomize (int arr[], int n)
{
	srand(time(NULL));
	
	for(int i=n-1;i>0;i--){
	    
	    int pos=rand()%(i+1);
	    
	    swap(arr[i],arr[pos]);
	    
	}
}
