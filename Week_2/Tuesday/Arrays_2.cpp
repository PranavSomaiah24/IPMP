// Mising number in range 1-N

int MissingNumber(vector<int>& array, int n) {
    int totalSum=n*(n+1)/2,sum=0;
    for(int i=0;i<n-1;i++)
        sum+=array[i];
        
    return (totalSum-sum);
}