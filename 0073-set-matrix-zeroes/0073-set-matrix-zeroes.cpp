class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        int f1=0;
        int f2=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[0][j]==0){
                    f1=1;
                }
                if(matrix[i][0]==0){
                    f2=1;
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
               if(matrix[i][j]==0){
                    matrix[0][j]=0;
                    matrix[i][0]=0;
                }
            }
        }
        vector<vector<int>>mat=matrix;
        // for(int i=0;i<n;i++){
        //     for(int j=0;j<m;j++){
        //         mat[i][j]=matrix[i][j];
        //     }
        // }
        for(int i=1;i<n;i++){
            for(int j=1;j<m;j++){
                if(mat[0][j]==0 )matrix[i][j]=0;
                if(mat[i][0]==0)matrix[i][j]=0;
            }
        }
         for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(f1==1){
                    matrix[0][j]=0;
                }
                if(f2==1){
                    matrix[i][0]=0;
                } 
            }
        }
    }
};