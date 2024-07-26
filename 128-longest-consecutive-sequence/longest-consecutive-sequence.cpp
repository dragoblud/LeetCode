class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        if (n == 0) return 0;
        sort(nums.begin(), nums.end());
        int ls = INT_MIN;
        int c = 0;
        int ans = 1;
        for (int i = 0; i < n; i++) {
            if (nums[i] - 1 == ls) {
                c += 1;
                ls = nums[i];
            }
            else if (nums[i] != ls) {
                c = 1;
                ls = nums[i];
            }
            ans = max(ans, c);
        }
        return ans;
    }
};