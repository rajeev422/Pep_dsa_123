class Solution {
public:
    int fun(vector<int>&arr){
        int minn;
        for(int i=0;i<arr.size();i++){
           cout<<arr[i];
        }
        return 0;
    }

    int firstStableIndex(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int>arr(n);
        int minn=nums[n-1];
        for(int i=n-1;i>=0;i--){
            if(nums[i]<minn){
                minn=nums[i];
            }
            arr[i]=minn;
        }
        int maxx=nums[0];
        int newmin=arr[0];
        int ans=INT_MAX;
        int ind=n;
        for(int i=0;i<nums.size();i++){
            maxx=max(maxx,nums[i]);
            minn=arr[i];
            if(maxx-minn<=k && maxx-minn<ans){
              ans=maxx-minn;
                if(i<ind)ind=i;
            }
        }
        fun(arr);
        if(ind==n)return -1;
        return ind;
    }
};