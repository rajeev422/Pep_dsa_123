class Solution {
public:
    vector<vector<int>>res;
    void fun(vector<int>&candidates,int target,int ind,vector<int>ds){
        if(target==0){
            res.push_back(ds);
            return;
        }
        if(ind==candidates.size()|| target<0)return;
        if(candidates[ind] <= target){
            ds.push_back(candidates[ind]);
            fun(candidates,target-candidates[ind],ind,ds);
            ds.pop_back();
        }
        fun(candidates,target,ind+1,ds);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int>ds;
        fun(candidates,target,0,ds);
        return res;
    }
};