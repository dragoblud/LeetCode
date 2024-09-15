class Solution {
public:
    // Check Even
    bool ce(unordered_map<char, int>& v) {
        for (auto& [a, b] : v) {
            if (b % 2 != 0)
                return false;
        }
        return true;
    }
    void updateMap(unordered_map<char, int>& v, string& s, int i, int val) {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' ||
            s[i] == 'u') {
            v[s[i]] += val;
        }
    }
    bool check(string& s, unordered_map<char, int> v, int m) {
        int n = s.length();
        bool ans = ce(v);
        if(ans) return true;
        for (int i = 0; i + m < n; i++) {
            updateMap(v, s, i, -1);
            updateMap(v, s, i + m, 1);
            ans |= ce(v);
            if(ans) return true;
        }
        return ans;
    }
    int findTheLongestSubstring(string s) {
        int r = s.length();
        int ans = 0;
        unordered_map<char, int> v;
        for (int i = 0; i < r; i++) {
            updateMap(v, s, i, 1);
        }
        for (int i = r; i >= 0; i--) {
            if (i >= 0 && i < r) updateMap(v, s, i, -1);
            if (check(s, v, i))return i;
        }
        return ans;
    }
};