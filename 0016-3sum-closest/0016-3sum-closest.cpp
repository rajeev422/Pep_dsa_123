class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int minn=INT_MAX;
        int ans=0;
        for(int i=0;i<n;i++){
            int j=i+1;
            int k=n-1;
            while(j<k){
                int sum=nums[i]+nums[j]+nums[k];
                if(abs(sum-target)<minn){
                    minn=abs(sum-target);
                    ans=sum;
                }
                if(sum<target)j++;
                else k--;
            }
        }
        return ans;
    }
};