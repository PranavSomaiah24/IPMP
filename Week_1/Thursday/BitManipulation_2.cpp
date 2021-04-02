//Reverse Bits

class Solution {
  public:
    long long reversedBits(long long X) {
        // code here
        long long res=0;
        for(int i=0;i<sizeof(X)*8;i++){
            if(X&(1<<i)){
                res=res|(1<<(sizeof(X)*8-1)-i);
            }
        }
        return res;
    }
};