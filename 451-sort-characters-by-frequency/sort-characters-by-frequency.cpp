class Solution {
public:
    string frequencySort(string s) {

        unordered_map<char,int> m;
        string ans;

        for(char c: s) m[c]++;

        vector<pair<int,char>> pot;

        for(auto ele: m){
            pot.push_back({ele.second,ele.first});
        }
        
        sort(pot.begin(),pot.end(), [](const pair<int,char> a, pair<int,char> b){
            return a.first > b.first;
        });

        for(auto ele: pot){
            ans += string(ele.first, ele.second);
        }

        return ans;
    }
};
