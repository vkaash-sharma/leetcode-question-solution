class Solution {
    public int rob(int[] nums) {
        
        if(nums.length == 1){
            return nums[0];
        }
        int a = nums[0];
        int b = Math.max(nums[0] , nums[1]);
        
        for(int i = 2 ; i < nums.length ; i++){

         int temp = Math.max(nums[i] + a , b);
            
            a = b;
            b = temp;
        }
        
        return b;
        
    }
}