class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
       
        int end = -1;
        int maxi = nums[0];
        
        for(int i = 1 ; i < nums.size() ; i++){
            if(maxi>nums[i]){
                end =i;
            }else{
                maxi = nums[i];
            }
        }
        
        int start = 0;
        int mini = nums[nums.size() -1];
        for(int i = nums.size() - 2 ; i>=0 ; i--){
         
            if(mini < nums[i]){
                start = i;
            }else{
                 mini = nums[i];
                }
        
        }
        
     return end - start+1;   
        
    }
};