class Solution {
    public int[] twoSum(int[] nums, int target) {

        Map<Integer, Integer> m = new HashMap<>();
        int[] ans = {-1,-1};
        int n = nums.length;

        for(int i=0;i<n;i++){
            int secondNum = target - nums[i];

            if (m.containsKey(secondNum)) {
                ans[0] = i;
                ans[1] = m.get(secondNum);
                return ans;
            } else {
                m.put(nums[i], i);
            }
        }

        return ans;
        
    }
}