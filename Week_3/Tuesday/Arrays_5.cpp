//Sorted Subsequence of size 3

class Solution{
  public:
    vector<int> find3Numbers(vector<int> A, int N)
{
   //Your code here
   int dec[N],inc[N];
   inc[0]=-1;
   dec[N-1]=-1;
   int min=0;
   for(int i=1;i<N;i++)
   {
       if(A[i]<=A[min])
       {
           inc[i]=-1;
           min=i;
       }
       else
        inc[i]=min;
   }
   int max=N-1;
   for(int i=N-2;i>=0;i--)
   {
       if(A[i]>=A[max])
       {
           dec[i]=-1;
           max=i;
       }
       else
        dec[i]=max;
   }
   vector<int> v1;
   for(int i=0;i<N;i++)
   {
       if(inc[i]!=-1 && dec[i]!=-1)
       {
           v1.push_back(A[inc[i]]);
           v1.push_back(A[i]);
           v1.push_back(A[dec[i]]);
           return v1;
       }
   }
   return v1;
}
};