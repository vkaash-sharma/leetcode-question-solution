class Solution {
public:
    
    void rangeChecker(vector<string> & res , int start ,int end){
        
         if(start != end){
             
             res.push_back(to_string(start)+"->"+to_string(end));
         }else{
             res.push_back(to_string(start));
         }
    }
    
    
    
    vector<string> summaryRanges(vector<int>& nums) {
        
        
        vector<string> ans;
        int n = nums.size();
        if(nums.size() ==0){
            return ans;
        }
        int start =nums[0];
        int end = nums[0];
        
        for(int i = 1 ; i < n ; i++){
            
            if (nums[i] == 1+nums[i-1]){
                end = nums[i];
            }else{
                rangeChecker(ans ,start , end);
                start = nums[i];
                end = nums[i];
            }
        }
        rangeChecker(ans , start ,end);
        return ans;
    }
};