class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int j=0;
        for(int i=m;i<n+m;i++){
            nums1[i]=nums2[(m+n)-i-1];
        }
        sort(nums1.begin(),nums1.end());
    }
};