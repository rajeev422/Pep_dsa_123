class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int n=nums.size();
        int maxx=INT_MIN;
        int sum=0;
        for(int i=0;i<n;i++){
            sum=max(nums[i],sum+nums[i]);
            maxx=max(maxx,sum);
        }
        int minn=INT_MAX;
        int sum2=0;
        for(int i=0;i<n;i++){
            sum2=min(nums[i],sum2+nums[i]);
            minn=min(minn,sum2);
        }
        if(abs(minn)>maxx)return abs(minn);
        return maxx;
    }
};