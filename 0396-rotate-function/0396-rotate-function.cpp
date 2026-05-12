class Solution {
public:
    int maxRotateFunction(vector<int>& nums) {
        int n=nums.size();
        long long f=0;
        long long  sum=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            f+=nums[i]*i;
        }
        long long maxx=f;
        for(int i=1;i<n;i++){
            f=f+sum-n*(nums[n-i]);
            maxx=max(maxx,f);
        }
        
        return maxx;
    }
};