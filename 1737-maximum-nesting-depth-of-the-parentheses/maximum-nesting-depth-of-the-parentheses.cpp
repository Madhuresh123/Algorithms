class Solution {
public:
    int maxDepth(string s) {
        
        int ans=0;
        int k=0;

        for(char c: s){
            if( c == '(') ans= max(ans, ++k);
            if(c == ')') k--;
        }

        return ans;

    }
};