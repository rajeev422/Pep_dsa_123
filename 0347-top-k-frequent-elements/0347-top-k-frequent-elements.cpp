class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        for(int i:nums){
            mp[i]++;
        }
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>q;
       for(auto &i:mp){
        q.push({i.second,i.first});
        if(q.size()>k)q.pop();
       }
       vector<int>res;
       while(!q.empty()){
        res.push_back(q.top().second);
        q.pop();
       }
       return res;
    }
};