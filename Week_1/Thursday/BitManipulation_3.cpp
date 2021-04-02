// Count set bit difference betweesn 2 int

class Solution{
    public:
    // Function to find number of bits needed to be flipped to convert A to B
    int countBitsFlip(int a, int b){
        
        // Your logic here
        int temp=(a^b),count=0;
        while(temp){
            if(temp&1)
                count++;
            temp=temp>>1;
        }
        return count;
    }
};