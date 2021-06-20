//Function to find maximum of each subarray of size k.

class Solution
{
    public:
    vector <int> max_of_subarrays(int *arr, int n, int k)
    {
        // your code 
        deque<int> dq(k);
        vector<int> res;
        int i;
        for(i=0;i<k;i++){
            while(!dq.empty() && arr[i]>=arr[dq.back()])
                dq.pop_back();
            
            dq.push_back(i);
        }
        
        for(;i<n;i++){
            res.push_back(arr[dq.front()]);
            
            if(!dq.empty() && dq.front()<=i-k)
                dq.pop_front();
                
            while(!dq.empty() && arr[i]>=arr[dq.back()])
                dq.pop_back();
            
            dq.push_back(i);
        }
        res.push_back(arr[dq.front()]);
        return res;
    }
};