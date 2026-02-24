class Solution {
public:
    void dfs(int r,int c,vector<vector<int>>&image,int originalcolor,int color){
        int n=image.size();
        int m=image[0].size();
        if(r<0 || r>=n||c<0||c>=m)return ;
        if(image[r][c]!=originalcolor) return;
        image[r][c]=color;
        dfs(r-1,c,image,originalcolor,color);
        dfs(r+1,c,image,originalcolor,color);
        dfs(r,c-1,image,originalcolor,color);
        dfs(r,c+1,image,originalcolor,color);
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int originalcolor=image[sr][sc];
        if(originalcolor==color)return image;
        dfs(sr,sc,image,originalcolor,color);
        return image;
    }
};