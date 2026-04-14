class Solution {
public:
    typedef long long ll;
    long long solve(int i,int j,vector<int>&robot,vector<int>&fact,vector<vector<ll>>&t){
        if(i>=robot.size())return 0;
        if(j>=fact.size())return 1e18;
        if(t[i][j]!=-1)return t[i][j];
        ll take = abs(robot[i]-fact[j])+solve(i+1,j+1,robot,fact,t);
        ll skip=solve(i,j+1,robot,fact,t);
        return t[i][j]= min(take,skip);
    }
    long long minimumTotalDistance(vector<int>& robot, vector<vector<int>>& factory) {
      sort(robot.begin(),robot.end());
         sort(factory.begin(),factory.end(),[](vector<int>&a,vector<int>&b){
            return a[0]<b[0];
         });
         vector<int>fact;
         for(int i=0;i<factory.size();i++){
            int limit=factory[i][1];
            int num=factory[i][0];
            for(int i=0;i<limit;i++){
                fact.push_back(num);
            }
         }
         int m=robot.size();
         int n=fact.size();
         vector<vector<ll>>t(m+1,vector<ll>(n+1,-1));

         return solve(0,0,robot,fact,t);
    }
};