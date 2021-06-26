class Solution
{
    public:
    //Function to find length of longest increasing subsequence.
    int longestSubsequence(int n, int a[])
    {
       // your code here
        int lis[n];
        lis[0]=1;
       int m=INT_MIN;
       for(int i=1;i<n;i++){
           lis[i]=1;
           for(int j=0;j<i;j++){
               if(a[i]>a[j]){
                   lis[i]=max(lis[i],lis[j]+1);
               }
           }
           if(lis[i]>m)
            m=lis[i];
       }
       return m;
    }
};