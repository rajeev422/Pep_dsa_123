class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int n=letters.size();
        char mini='{';
        for(int i=0;i<n;i++){
            if(letters[i]>target){
                if(letters[i]<mini){
                    mini=letters[i];
                }
            }
        }
        if(mini=='{')return letters[0];
        return mini;
    }
};