class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>mp;
        for(auto it: strs){
            string key=it;
            sort(key.begin(),key.end());
            mp[key].push_back(it);
        }
        vector<vector<string>>st;
        for(auto it: mp){
            st.push_back(it.second);
        }
        return st;
    }
};