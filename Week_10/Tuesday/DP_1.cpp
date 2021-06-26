class Solution{
  public:
    int minJumps(int arr[], int n){
        // Your code here
        
        if(n==0 || arr[0]==0){
            return -1;
        }
        
        vector<int> jumps(n);
        jumps[0]=0;
        
        for(int i=1;i<n;i++){
            jumps[i]=INT_MAX;
            for(int j=0;j<i;j++){
                if(j+arr[j]>=i && arr[j]!=INT_MAX){
                    jumps[i]=min(jumps[i], jumps[j]+1);
                }
            }
        }
        return (jumps[n-1]!=INT_MAX)?jumps[n-1]:-1;
    }
};