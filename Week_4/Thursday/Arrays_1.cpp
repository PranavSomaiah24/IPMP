class Solution{
    public:
    // arr : given array
    // l : starting index of the array i.e 0
    // r : ending index of the array i.e size-1
    // k : find kth smallest element and return using this function
    int kthSmallest(int arr[], int l, int r, int k)
    {
        priority_queue<int> maxheap;
        
        for(int i=0;i<=r;i++){
            if(maxheap.size()<k){
                maxheap.push(arr[i]);
            }else{
                if(arr[i]<maxheap.top()){
                    maxheap.pop();
                    maxheap.push(arr[i]);
                }
            }
        }
        return maxheap.top();
    }
};