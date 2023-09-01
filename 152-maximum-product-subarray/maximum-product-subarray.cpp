class Solution {
public:
    int maxProduct(vector<int>& nums) {

        int maxPro = INT_MIN;
        int prePro = 1;
        int sefPro =1;

       for(int i=0;i<nums.size();i++){

           prePro *= nums[i];
           sefPro *= nums[nums.size()-i-1];

            maxPro = max(maxPro, prePro); 
            maxPro = max(maxPro, sefPro); 

            if(prePro == 0) prePro=1;
            if(sefPro == 0) sefPro=1;

       }
        return maxPro;
    }
};