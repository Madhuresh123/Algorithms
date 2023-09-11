class Solution {
    public int majorityElement(int[] nums) {

        int k = 0;
        int majNum = 0;

        for(int i=0;i<nums.length; i++){

            if(k==0){
                majNum = nums[i];
                k++;
            }

            else if(nums[i] == majNum){
                k++;
            }else{
                k--;
            }
        }

        return majNum;

    }
}