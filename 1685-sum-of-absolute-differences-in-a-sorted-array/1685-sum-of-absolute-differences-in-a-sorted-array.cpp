class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        int n=nums.size();
        vector<int>pre(n+1);
        int sum=0;
        pre[0]=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            pre[i+1]=sum;
        }
        vector<int>ans(n);
        for(int i=0;i<n;i++){
            ans[i]=abs(nums[i]*i-pre[i])+abs(pre[n]-pre[i+1]-nums[i]*(n-i-1));

        }
        return ans;
    }
};