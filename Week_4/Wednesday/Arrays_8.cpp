class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(int arr[], int n, int sum)
    {
        // Your code here
    int curr_sum = arr[0], start = 0, i;
    vector<int> res;
    for (i = 1; i <= n; i++) {
        
        while (curr_sum > sum && start < i - 1) {
            curr_sum = curr_sum - arr[start];
            start++;
        }
 
        if (curr_sum == sum) {
            res.push_back(start+1);
            res.push_back(i);
            break;
        }

        if (i < n)
            curr_sum = curr_sum + arr[i];
    }
    if(res.size()==0)
        res.push_back(-1);
        
    return res;
    }
};