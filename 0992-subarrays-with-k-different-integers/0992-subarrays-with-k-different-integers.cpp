class Solution {
public:
    int  swd(vector<int>&nums,int k){
        unordered_map<int,int>mp;
        int left=0;
        int count=0;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
            while(mp.size()>k){
                mp[nums[left]]--;
                if(mp[nums[left]]==0)mp.erase(nums[left]);
                left++;
            }
            count+=i-left+1;
        }
       return count;
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        int ans=swd(nums,k)-swd(nums,k-1);
        return ans;
    }
};