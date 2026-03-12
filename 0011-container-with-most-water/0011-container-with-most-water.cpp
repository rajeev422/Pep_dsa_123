class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int i=0;
        int j=n-1;
        int maxx=-1;
        while(i<j){
            int minn=min(height[i],height[j]);
            int area=minn*(j-i);
            maxx=max(area,maxx);
            if(height[i]<height[j])i++;
            else j--;
        }
        return maxx;
    }
};