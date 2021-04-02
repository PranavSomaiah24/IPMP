//Swap odd and even bits in a number

class Solution{
    public:
    // function to swap odd and even bits
    unsigned int swapBits(unsigned int n)
    {
    	
    	// Your code here
    	unsigned int oddMask,evenMask;
    	evenMask=n&0xAAAAAAAA;
    	oddMask=n&0x55555555;
    	evenMask=evenMask>>1;
    	oddMask=oddMask<<1;
    	n=oddMask|evenMask;
    	return n;
    }
};