class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        
        sort(nums.begin() , nums.end());
        int s = nums.size() - 1;
        
         int sum = nums[0] + nums[1] + nums[s];
        
        
        for(int i = 0 ; i < nums.size() - 2 ; i++){
            
             int  start = i+1;
            int end = nums.size() - 1;
            
            
            while(start < end){
                
                 int curr_sum =nums[i] + nums[start] + nums[end];
                if (curr_sum < target ){
                    start++;
                }else{
                    end--;
                }
                
                if(abs(target -curr_sum) < abs(target-sum)){ 

                sum = curr_sum;
                }
                
            }
            
            
        }
        
        return sum;
    }
};