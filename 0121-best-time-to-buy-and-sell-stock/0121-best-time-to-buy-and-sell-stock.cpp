class Solution {
public:
    int maxProfit(vector<int>& prices) {
        vector<int>dp(prices.size()+1);
        int n=prices.size();
        dp[0]=0;
        int minn=prices[0];
        for(int i=1;i<n+1;i++){
            dp[i]=max(prices[i-1]-minn,dp[i-1]);
            minn=min(minn,prices[i-1]);
        }
        cout<<minn<<" ";
        return dp[n];
    }
};