class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxx=1;
        int minn=1;
        int res=INT_MIN;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<0)swap(maxx,minn);
            maxx=max(maxx*nums[i],nums[i]);
            minn=min(minn*nums[i],nums[i]);
            res=max(res,maxx);
        }
        return res;
    }
};