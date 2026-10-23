class Solution {
public:
    bool areOccurrencesEqual(string s) {
        int n=s.size();
        unordered_map<char,int>mp;
        for(auto it :s){
            mp[it]++;
        }
        for(int i=1;i<s.size();i++){
            if(mp[s[i]]!=mp[s[i-1]])return false;
        }
        return true;
    }
};