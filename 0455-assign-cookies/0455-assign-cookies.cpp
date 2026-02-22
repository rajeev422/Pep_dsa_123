class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int count=0;
        int n=g.size()-1;
        int si=s.size()-1;
        while(n>=0 && si>=0){
            if(g[n]<=s[si]){
                count++;
                n--;
                si--;
            }
            else if(g[n]>s[si])n--;
            else si--;
        }
        return count;
    }
};