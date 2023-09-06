class Solution {
public:
    string removeOuterParentheses(string s) {

       string ans="";
        int k=0;

        for(char c: s){

            if(c=='(' && ++k > 1) ans +=c;
            if(c==')' && --k > 0) ans +=c;
        }

        return ans;


    }
};