//Merge two sorted arrays m+n;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int j=m+n-1;
        for(int i=m-1;i>=0;i--){
            nums1[j]=nums1[i];
            j--;
            }
        int k=0,i=n;
        j=0;
        while(k<(m+n)){
            if((j==n)||(i<(m+n) && nums1[i]<nums2[j])){
                nums1[k]=nums1[i];
                k++;
                i++;
            }else{
                nums1[k]=nums2[j];
                k++;
                j++;
            } 
        }
        for(int i=0;i<m+n-1;i++){
            cout<<nums1[i];
        }
       cout<<'\n';
    }
};