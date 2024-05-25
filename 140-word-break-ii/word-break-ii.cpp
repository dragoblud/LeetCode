class Solution {
public:
    void dp(int j,vector<string> &ans,string t,string &s,vector<string>& wordDict){
        if(j==s.size()) {
            t.pop_back();
            ans.push_back(t);
            return;
        }
        for(auto it:wordDict){
            if(j+it.size()<=s.size() and s.substr(j,it.size())==it)dp(j+it.size(),ans,t+it+" ",s,wordDict);
        }
    }
    vector<string> wordBreak(string s, vector<string>& wordDict) {
    vector<string> ans;
    dp(0,ans,"",s,wordDict); 
    return ans;   
    }
};