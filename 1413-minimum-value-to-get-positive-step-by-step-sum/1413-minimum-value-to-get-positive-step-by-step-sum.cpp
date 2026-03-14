class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int n=nums.size();
        int pre[n+1];
        pre[0]=0;
        int minn=0;
        for(int i=0;i<n;i++){
            pre[i+1]=pre[i]+nums[i];
            minn=min(minn,pre[i+1]);
        }
        cout<<minn;
        return abs(minn)+1;
    }
};