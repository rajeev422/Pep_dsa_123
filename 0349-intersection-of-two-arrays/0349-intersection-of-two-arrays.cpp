class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>mp2;
       
        for(auto it:nums2){
            mp2[it]++;
        }
        vector<int>arr;
        for(int i=0;i<nums1.size();i++){
            if(mp2.find(nums1[i])!=mp2.end()){
                arr.push_back(nums1[i]);
                mp2.erase(nums1[i]);
            }
        }
        return arr;
    }
};