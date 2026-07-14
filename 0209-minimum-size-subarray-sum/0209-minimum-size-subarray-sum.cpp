class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size();
        int j=0;
        int sum=0;
        int mini=n+1;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            while(sum>=target){
                sum=sum-nums[j];
                mini=min(mini,i-j+1);
                j++;
            }

        }
        if(mini>n)return 0;
        return mini;
    }
};