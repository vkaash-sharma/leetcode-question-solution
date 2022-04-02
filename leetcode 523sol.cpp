class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        
        if(nums.size() == 1){
            return false;
        }
        int sum = 0;
        
        map<int , int> mp;
        
        for(int i = 0 ; i < nums.size() ; i++){

          sum = sum + nums[i];
            
          if(sum %k==0  && i>=1){
          return true;
          } 
            
//         if it is exist in my map
            
            if(mp.find(sum%k)!=mp.end())
            {

             if(abs(i - mp[sum%k]) >=2)
             {
                 return true;
             }
            }
            else{
            mp[sum%k] = i;
            }
        }
        return false;
        
    }
};