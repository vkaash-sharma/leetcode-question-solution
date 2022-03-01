class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        int n = nums.size();
        map<int ,int> mp;
       
       for (int i = 0 ; i < n ; i++){
           
           mp[nums[i]]++;
       }
        
      for(int i = 0 ; i < n ; i++){
          
          if (mp[nums[i]] > n/2){
               return nums[i];
          }
      }
        return -1;
            
    }
};

// the approach is really simple what we have to do is put the array element into the map datastructur and the n check the count of the element if the element is in the majority element so we simply say it is a majority element
