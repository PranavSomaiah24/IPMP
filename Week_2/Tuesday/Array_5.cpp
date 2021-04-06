// Intersection of two unsorted arrays

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> hash;
        vector<int> res;
        for(int i=0;i<nums1.size();i++){
            if(hash.find(nums1[i])==hash.end())
                hash.insert(nums1[i]);
        }
        for(int i=0;i<nums2.size();i++){
            if(hash.find(nums2[i])!=hash.end()){
                hash.erase(nums2[i]);
                res.push_back(nums2[i]);
                }
        }
        return res;
    }
};