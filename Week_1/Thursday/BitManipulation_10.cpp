//Count of set bits

class Solution{
    public:
   
    bool countSetBits(unsigned int n){
        
        int count=0;
        
        while(n>0){
            if(n&1)
                count++;
            n=n>>1;
        }
        
        return count;
    }
};