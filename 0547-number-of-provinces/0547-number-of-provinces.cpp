class Solution {
public:
    void dfs(vector<vector<int>>&adj,vector<bool>&visited,int city){
        visited[city]=true;
        for(int i:adj[city]){
            if(visited[i]==0){
                dfs(adj,visited,i);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n=isConnected.size();
        vector<vector<int>>adj(n);
        vector<bool>Visited(n,false);
        int pro=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(isConnected[i][j]==1 && i!=j){
                    adj[i].push_back(j);
                    adj[j].push_back(i);
                }
            }
        }
        for(int i=0;i<n;i++){
            if(!Visited[i]){
                dfs(adj,Visited,i);
                pro++;
            }
        }
        return pro;
    }
};