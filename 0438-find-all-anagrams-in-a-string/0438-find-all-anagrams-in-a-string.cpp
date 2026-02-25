class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        unordered_map<char,int>tar;
        for(int ch:p){
            tar[ch]++;
        }
        vector<int>res;
        unordered_map<char,int>curr;
        int l=0;
        for(int i=0;i<s.size();i++){
            curr[s[i]]++;
            if(i-l+1>p.size()){
                char temp=s[l];
                curr[temp]--;
            
            if(curr[temp]==0){
                curr.erase(temp);
            }
                l++;
            }
            if(curr==tar){
                res.push_back(l);
            }
        }
        return res;
    }
};