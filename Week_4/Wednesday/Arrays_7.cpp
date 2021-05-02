class Solution
{
    public:
    //Function to find the maximum money the thief can get.
    ll FindMaxSum(ll arr[], ll n)
    {
        // Your code here
        ll excl=0,incl=0;
        
        for(ll i=0;i<n;i++){
            int temp=max(excl,incl);
            incl=excl+arr[i];
            excl=temp;
        }
        return max(excl,incl);
    }
};