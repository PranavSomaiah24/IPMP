class Solution
{
    public:
    //Function to find the next greater element for each element of the array.
    vector<long long> nextLargerElement(vector<long long> arr, int n){
        // Your code here
        vector<long long> res(n);
        stack<long long> s;
        
        for(int i=n-1;i>=0;i--){
            while(s.size()>0 && arr[i]>s.top())
                s.pop();
            
            if(s.size()<=0)
                res[i]=-1;
            else{
                res[i]=s.top();
            }
            
            s.push(arr[i]);
        }
        return res;
    }
};