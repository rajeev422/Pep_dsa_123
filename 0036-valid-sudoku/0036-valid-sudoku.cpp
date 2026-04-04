class Solution {
public:
    bool fun(vector<vector<char>>&board,int stc,int enc,int str,int enr){
            unordered_map<char,int>mp;
        for(int i=stc;i<=enc;i++){
            for(int j=str;j<=enr;j++){
                if(board[i][j]=='.')continue;
                if(mp.find(board[i][j])!=mp.end()){
                    return false;
                }
                mp[board[i][j]]++;
            }
        }
        return true;
    }
    bool isValidSudoku(vector<vector<char>>& board) {
        int n=board.size();
        int m=board[0].size();
        for(int i=0;i<n;i++){
            unordered_map<char,int>mp;
            for(int j=0;j<m;j++){
                if(board[i][j]=='.')continue;
                if(mp.find(board[i][j])!=mp.end())return false;
                mp[board[i][j]]++;
            }
        }
        for(int i=0;i<m;i++){
            unordered_map<char,int>mp;
            for(int j=0;j<n;j++){
                if(board[j][i]=='.')continue;
                if(mp.find(board[j][i])!=mp.end() )return false;
                mp[board[j][i]]++;
            }
        }
        for(int i=0;i<9;i+=3){
            for(int j=0;j<9;j+=3){
            if(!fun(board,i,i+2,j,j+2)){
                return false;
            }
            }
        }
        return true;
    }
};