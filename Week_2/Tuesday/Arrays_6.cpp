// Union of two sorted arrays

vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int i=0,j=0;
        vector<int> res;
        while(i<num1.size() && j<nums2.size()){
            if(nums1[i]==nums2[j]){
                res.push_back(nums1[i]);
                i++;j++;
            }else if(nums1[i]<nums2[j]){
                res.push_back(nums1[i]);
                i++;
            }else{
                res.push_back(nums2[j]);
                j++;
            }
        }
        while(i<nums1.size()){
             res.push_back(nums1[i]);
                i++;
        }
        while(j<nums2.size()){
             res.push_back(nums2[j]);
                j++;
        }

        return res;
    }