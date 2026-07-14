class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int>mp;
        int n=s.size();
        if(n==0)return 0;
        int j=0;
        int len=1;
        for(int i=0;i<n;i++){
            mp[s[i]]++;
            while(mp[s[i]]>1){
                mp[s[j]]--;
                j++;
            }
            len=max(len,i-j+1);
        }
        return len;
    }
};