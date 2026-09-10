class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        int n=nums.size();
        int curr=0;
        int count=0;
        for(int i=0;i<n;i++){
            curr+=nums[i];
            if(mp.find(curr-k)!=mp.end()){
                count++;
            }
            mp[curr]++;
        }
        return count+1;
    }
};