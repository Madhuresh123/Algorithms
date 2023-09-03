class Solution {
public:
    int maxProduct(vector<int>& nums) {

        int maxPro = INT_MIN;
        int prefixPro = 1;
        int suffixPro =1;

        for(int i=0;i<nums.size();i++){

                prefixPro *= nums[i];
                suffixPro *= nums[nums.size()-1-i];

                maxPro = max(maxPro, max(prefixPro,suffixPro));

                if(prefixPro == 0 ){
                    prefixPro = 1;
                }

                if(suffixPro == 0 ){
                    suffixPro = 1;
                }
        }

        return maxPro;
    }
};