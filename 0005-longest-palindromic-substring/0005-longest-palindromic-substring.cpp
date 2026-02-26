class Solution {
public:
    string longestPalindrome(string s) {
        int n=s.size();
        vector<vector<bool>>dp(n,vector<bool>(n,false));
        int a=0,maxlen=1;
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                if(i==j)dp[i][j]=true;
                else if(abs(i-j)==1 && s[i]==s[j]){
                    dp[i][j]=true;
                    a=i;
                    maxlen=2;
                }
            }
        }
        for(int len=3;len<=n;len++){
            for(int i=0;i+len-1<n;i++){
               int j=i+len-1;
               if(s[i]==s[j])dp[i][j]=dp[i+1][j-1];
               else dp[i][j]=false;
               if(dp[i][j]==true && len>maxlen){
                a=i;
                maxlen=len;
               }
            }
        }
       
        return s.substr(a,maxlen);
    }
};