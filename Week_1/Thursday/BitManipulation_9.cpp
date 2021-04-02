//Position of Rightmost set bit

unsigned int getFirstSetBit(int n){
return log2(n&-n)+1;
}
//Also possible using right or left shift