class Solution {
public:
    bool rotateString(string s, string goal) {
        int n=s.size();
        int m=goal.size();
        if(m!=n)return false;
        string str=s+s;
        for(int i=0;i<n;i++){
            int j=0;
            while (j < n && str[i + j] == goal[j]) {
                j++;
            }
            if(j==m)return true;
        }
        return false;
    }
};