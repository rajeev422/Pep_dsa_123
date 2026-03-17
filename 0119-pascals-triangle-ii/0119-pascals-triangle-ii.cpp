class Solution {
public:
    vector<int> getRow(int numRows) {
        numRows=numRows+1;
        if(numRows==0)return{};
           vector<vector<int>>res(numRows);
        for(int i=0;i<numRows;i++){
            res[i].resize(i + 1);
            res[i][i]=1;
            res[i][0]=1;
        }
        for(int i=2;i<numRows;i++){
            
            for(int j=1;j<i;j++){
                res[i][j]=res[i-1][j-1]+res[i-1][j];
            }
        }
        return res[numRows-1];
    }
};