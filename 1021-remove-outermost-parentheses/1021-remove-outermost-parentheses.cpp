class Solution {
public:
    string removeOuterParentheses(string s) {
        string str="";
        int count=0;
        for(auto it: s){
            if(it=='('){
                if(count>0)str+=it;
                count++;
            }else{
                count--;
                if(count>0)str+=it;
            }
        }
        return str;
    }
};