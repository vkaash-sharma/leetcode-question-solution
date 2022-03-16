class Solution {
    public int jump(int[] nums) {
        
        int jump = 0;
        int currStage = 0;
        int maxStage = 0;
        
        for(int i = 0 ; i < nums.length - 1 ; i++){
            
            
            if(i+nums[i] > maxStage){
                maxStage = i+nums[i];
            }
            
            if(i == currStage){
                jump++;
                currStage = maxStage;
            }
        }
        
        return jump;
    }
}


//  we have to use the greedy approach what we have to do in this we have to check from that place what maximum length where i can reach to the that place think about this case you definately got the answer