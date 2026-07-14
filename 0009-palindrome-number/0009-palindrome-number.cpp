class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)return false;
        int ans=x;
        long long num=0;
        while(x>0){
            int rem=x%10;
            num=num*10+rem;
            x=x/10;
        }
        if(num==ans)return true;
        return false;
    }
};