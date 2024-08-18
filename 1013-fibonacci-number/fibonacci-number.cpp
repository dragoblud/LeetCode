class Solution {
public:
    int fib(int n) {
        if(n<=1)return n;
        // vector<int>dp(n+1,-1);
        int prev1=0,prev2=1 ,curri;
        for(int i=2;i<=n;i++){
            curri=prev1+prev2;
            prev1=prev2;
            prev2=curri;
        }
        return curri;

    }
};