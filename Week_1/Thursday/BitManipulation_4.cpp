//Unset Rightmost Bit

unsigned int unsetRMB(unsigned int x){
    return x&(x-1);
}

//Position of Rightmost set bit

unsigned int getFirstSetBit(int n){
return log2(n&-n)+1;
}
//Also possible using right or left shift