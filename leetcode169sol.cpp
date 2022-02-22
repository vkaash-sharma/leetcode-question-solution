class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        
        map<int,int> mp;
        
        for (int i = 0 ; i< nums.size() ; i++){
            
            mp[nums[i]]++;
        }
        
        for(int i = 0 ; nums.size() ; i++){
            
            if (mp[nums[i]] > nums.size()/2){
                return nums[i];
            }
        }
        return 0;
    }
};

// you can do by your own