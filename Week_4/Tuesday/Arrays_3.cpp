// Find duplicates in O(n) time

class Solution{
  public:
    vector<int> duplicates(int arr[], int n) {
        // code here
        unordered_map<int,int> hash;
        vector<int> res;
        
        for(int i=0;i<n;i++){
            
            hash[arr[i]]++;
            if(hash[arr[i]]==2)
                res.push_back(arr[i]);
        }
        if(res.size()==0)
            res.push_back(-1);
        else
            sort(res.begin(),res.end());
        return res;
    }
};