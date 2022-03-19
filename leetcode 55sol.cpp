class Solution {
public:
    bool canJump(vector<int>& nums) {
        
        int n = nums.size();
        int getMaxi = 0;
        for(int i = 0 ; i < nums.size() ; i++){
         
            int getAns = nums[i];
            
            if(i > getMaxi ){
                return false;
            }else{
                getMaxi = max(getMaxi , (getAns+i));
            }
        
        }
        return true;
        
    }
};

// in this what we have to do is we have to add index with array value and check the maximum value and and if we find the index value is greater than the maximum then we simply reaturn the false at any cost we never arrive to last place of the array 
