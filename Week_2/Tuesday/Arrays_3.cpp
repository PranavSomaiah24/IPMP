// Find 2 elements which are not repeated

class Solution
{
public:
    vector<int> singleNumber(vector<int>& nums) 
    {
        unordered_set<int> hash;
        for(int i=0;i<nums.size();i++){
            if(hash.find(nums[i])!=hash.end()){
                hash.erase(nums[i]);
            }else{
                hash.insert(nums[i]);
            }
        }
        unordered_set<int>:: iterator i;
        vector<int> result;
        i=hash.begin();
        int x,y;
        x=*i;i++;
        y=*i;
        if(x>y){
            result.push_back(y);
            result.push_back(x);
        }else{
            result.push_back(x);
            result.push_back(y);
        }
        return result;
    }
};