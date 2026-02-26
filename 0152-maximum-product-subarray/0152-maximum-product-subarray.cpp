class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        vector<double>dpMax(n);
        vector<double>dpMin(n);
        dpMax[0]=nums[0];
        dpMin[0]=nums[0];
        double res=nums[0];
        for(int i=1;i<n;i++){
            double num=nums[i];
            dpMax[i]=max({num,num*dpMax[i-1],num*dpMin[i-1]});
            dpMin[i]=min({num,num*dpMin[i-1],num*dpMax[i-1]});
            res=max(res,dpMax[i]);
        }
    return (int)res;
    }
};