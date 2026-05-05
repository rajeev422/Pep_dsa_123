class Solution {
public:
    bool rotateString(string s, string goal) {
        int n=s.size();
        if(s.size()!=goal.size())return false;
        string m=s+s;
        return m.find(goal)!=string::npos;
    }
};