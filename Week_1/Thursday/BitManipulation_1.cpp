//Check if no is power of 2

class Solution{
    public:
    // Function to check if given number n is a power of two.
    bool isPowerofTwo(long long n){
        
        int count=0;
        
        while(n>0){
            if(n&1)
                count++;
            n=n>>1;
        }
        
        if(count==1)
            return true;
        return false;
    }
};