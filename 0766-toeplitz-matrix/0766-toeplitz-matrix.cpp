class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        int n=matrix.size()-1;
        int m=matrix[0].size()-1;
        cout<<n<<" "<<m;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]!=matrix[i+1][j+1]){
                    return false;
                }
            }
        }
        return true;
    }
};