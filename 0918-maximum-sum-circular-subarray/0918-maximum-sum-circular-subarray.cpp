class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int n=nums.size();
        // vector<int>res(2*n);
        // for(int i=0;i<2*n;i++){
        //     if(i>=n){
        //         res[i]=nums[i-n];
        //     }
        //     else{
        //         res[i]=nums[i];
        //     }
        // }
        int tot=0;
        for(int i=0;i<n;i++){
            tot+=nums[i];
        }
        int sum=0;
        int maxx=INT_MIN;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            maxx=max(maxx,sum);
            if(sum<=0)sum=0;
        }
        // return maxx;
        int sum1=0;
        int minn=INT_MAX;
        for(int i=0;i<n;i++){
            sum1=min(sum1+nums[i],nums[i]);
            minn=min(minn,sum1);
        }
        if(maxx<0)return maxx;
        return max(maxx,tot-minn);
    }
};