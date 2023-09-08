class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int minDay = INT_MAX;
        int maxPro = 0;

        for(int i=0;i<prices.size();i++){

            minDay = min(minDay,prices[i]);

            maxPro = max(maxPro, prices[i]-minDay);

        }

        return maxPro;

    }
};