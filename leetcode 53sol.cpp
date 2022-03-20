class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int currSum = 0;
        int maxi = INT_MIN;
        
        for(int i = 0 ; i < nums.size() ; i++)
        {
            
            currSum +=nums[i];
            if(currSum > maxi){
                maxi = currSum;
            }
            if(currSum < 0){
                currSum = 0;
            }
        }
        
        return maxi;
        
        
    }
};