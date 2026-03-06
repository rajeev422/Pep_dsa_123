class Solution {
public:
    string longestPalindrome(string s) {
     int n=s.size();
     int i=0;
     vector<vector<bool>>dp(n,vector<bool>(n,false));

     int a=0;
     int maxx=1;
     for(int i=n-1;i>=0;i--){
        for(int j=i;j<n;j++){
            if(s[i]==s[j]){
               if(j-i<2 || dp[i+1][j-1]){
                dp[i][j]=true;
                int curr=j-i+1;
                if(curr>maxx){
                    maxx=curr;
                    a=i;
                }
               }
            }
        }
     }
     return s.substr(a,maxx);
    }
};