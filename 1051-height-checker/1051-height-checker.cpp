class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int>exp=heights;
        int count=0;
        sort (exp.begin(),exp.end());
        for(int i=0;i<exp.size();i++){
            if(heights[i]!=exp[i])count++;
        }
        return count;
    }
};