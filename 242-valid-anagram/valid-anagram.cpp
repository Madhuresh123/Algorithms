class Solution {
public:
    bool isAnagram(string s, string t) {


        if(s.size() != t.size())
        return false;

       int arr[256] = {0};

        for(int i=0;i<s.size();i++){
            arr[s[i]] += 1;
            arr[t[i]] -=1;
        }

        for(int ele: arr){
            if(ele != 0)
            return false;
        }

        return true;
        

    }
};