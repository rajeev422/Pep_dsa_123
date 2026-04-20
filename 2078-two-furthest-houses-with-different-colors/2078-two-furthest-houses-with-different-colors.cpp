class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int i=0;
        int n=colors.size();
        int j=n-1;
        int front,back;
        while(i<j){
            if(colors[i]!=colors[j]){
                front=j-i;
                break;
            }

            // j--;
            i++;
        }
        i=0;
        j=n-1;
         while(i<j){
            if(colors[i]!=colors[j]){
                back=j-i;
                break;
            }

            j--;
            // i++;
        }

        return max(front,back);
    }
};