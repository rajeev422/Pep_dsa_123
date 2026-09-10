class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int n=nums.size();
        unordered_map<int,int>mp;
        int curr=0;
        int count=0;
        mp[0]=1;
        for(int i=0;i<n;i++){
            curr+=nums[i];
            if(mp.find(curr-goal)!=mp.end()){
                count+=mp[curr-goal];
            }
            mp[curr]++;
        }
        return count;
    }
};