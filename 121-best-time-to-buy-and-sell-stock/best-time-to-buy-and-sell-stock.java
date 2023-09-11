class Solution {
    public int maxProfit(int[] nums) {

            int minDay = Integer.MAX_VALUE;
            int maxProfit = 0;

            for(int i=0; i<nums.length; i++){

                    if(minDay > nums[i]){
                        minDay = nums[i];
                    }

                    maxProfit = Math.max(maxProfit, nums[i] - minDay );
            }

            return maxProfit;
        
    }
}