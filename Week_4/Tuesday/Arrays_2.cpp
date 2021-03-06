
// Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
class Solution{
    public:
    
    int equilibriumPoint(long long a[], int n) {
    
        // Your code here
        long long pre[n],suff[n];
        pre[0]=0;
        suff[n-1]=0;
        
        for(int i=1;i<n;i++){
            pre[i]=pre[i-1]+a[i-1];
        }
        for(int i=n-2;i>=0;i--){
            suff[i]=suff[i+1]+a[i+1];
        }
        
       
        for(int i=0;i<n;i++){
            if(pre[i]==suff[i])
                return i+1;
        }
        return -1;
    }

};