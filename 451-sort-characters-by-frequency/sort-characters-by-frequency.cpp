class Solution {
public:
    string frequencySort(string s) {
        vector<int> arr(128, 0);
        string ans = "";

        // Count the frequency of each character
        for (char c : s) {
            arr[c]++;
        }

        vector<pair<int, int>> charFrequency;
        for (int i = 0; i < 128; i++) {
            if (arr[i] > 0) {
                charFrequency.push_back({i, arr[i]});
            }
        }
        sort(charFrequency.begin(), charFrequency.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
            return a.second > b.second;
        });

        // Build the sorted string
        for (auto cf : charFrequency) {
            ans += string(cf.second, char(cf.first));
        }

        return ans;
    }
};
