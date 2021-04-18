//Triplet sum

class Solution{
    public:
    //Function to find if there exists a triplet in the 
    //array A[] which sums up to X.
    bool find3Numbers(int A[], int n, int X)
{
    sort(A,A+n);
    
    for(int i=0;i<n-2;i++){
        int m=i+1,r=n-1;
        while(m<r){
            if((A[i]+A[m]+A[r])==X)
                return 1;
            if((A[i]+A[m]+A[r])<X)
                m++;
            else
                r--;
        }
    }
    return 0;
    
}

};