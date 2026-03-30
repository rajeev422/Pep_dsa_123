class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        unordered_map<int,int>mp;
        int left=0;
        int maxx=0;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
            while(mp[nums[i]]>1){
                mp[nums[left]]--;
                left++;
            }
            int sum=0;
            for(int j=left;j<=i;j++){
                sum+=nums[j];
            }
            maxx=max(maxx,sum);
        }
        return maxx;
    }
};