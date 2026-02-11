class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
        vector<int>arr;
        for(auto &it:nums1){
            arr.push_back(it);
        }
        for(auto &it:nums2){
            arr.push_back(it);
        }
        int n1=arr.size();
        sort(arr.begin(),arr.end());
        double ans=0.0;
        if(n1%2==0){
            ans=(arr[n1/2-1]+arr[n1/2])/2.0;
        }else{
            ans=arr[n1/2];
        }
        return ans;
    }
};