class Solution {
public:
    int maxRepOpt1(string text) {
        int n=text.size();
        unordered_map<char,int>mp;
        for(auto it:text){
            mp[it]++;
        }
        int maxx=-1;
        for(auto it:mp){
        char ch=it.first;
        int count=0;
        int l=0;
        for(int i=0;i<n;i++){
            if(text[i]!=ch)count++;
            while(count>1){
                if(text[l]!=ch)count--;
                l++;
            }
            int win=i-l+1;
            maxx=max(maxx,min(win,mp[ch]));
        }
        }
        return maxx;
    }
};