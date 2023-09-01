class Solution {
public:
    int maxProduct(vector<int>& nums) {

        int maxPro = INT_MIN;
        int prePro = 1;
        int sefPro =1;

        for(int i=0;i<nums.size();i++){
            prePro *= nums[i];
            maxPro = max(maxPro, prePro);
            if(prePro == 0) prePro=1;
        }

        for(int j=nums.size()-1; j>=0 ;j--){
            sefPro *= nums[j];
            maxPro = max(maxPro, sefPro);
            if(sefPro == 0) sefPro=1;
        }


        return maxPro;
        
    }
};