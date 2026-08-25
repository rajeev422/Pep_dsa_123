class Solution {
public:
   
    const long long mod=1e9+7;
    int fun(long long x,long long n){
        if(n==0)return 1;
        long long half=fun(x,n/2);
        long long res=(half*half)%mod;
        if(n%2==1){
            res=(res*x)%mod;
        }
       return res;
    }
    int countGoodNumbers(long long n) {
    
        return (long long)fun(5,(n+1)/2)*fun(4,n/2)%mod;
    }
};