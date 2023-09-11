public class Solution {
    public void nextPermutation(int[] nums) {

        int start = -1;
        int n = nums.length;

        for(int i=n-2; i>=0 ; i--){
            if(nums[i] < nums[i+1]){
                start = i;
                break;
            }
        }

        if(start == -1){
            reverse(nums, 0, n-1);
        }else{

            for(int i=n-1; i>=0; i--){
                if(nums[i] > nums[start]){
                    swap(nums,i,start);
                    break;
                }
            }
            reverse(nums, start+1, n-1);
        }
      
    }

    public void swap(int[] nums, int a, int b){
        int temp = nums[a];
        nums[a] = nums[b];
        nums[b] = temp;
    }

    public void reverse(int[] nums, int a, int b){

            while(a <= b){
                swap(nums, a,b);
                a++;
                b--;
            }
    }

}
