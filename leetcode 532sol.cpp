class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        
        
        map<int , int> mp;
        int count = 0;
        for(int i = 0 ; i < nums.size() ; i++){
            
            mp[nums[i]]++;
        }
        
        
        for(auto it : mp){
            
            if(k==0 && it.second > 1){
                count++;
            }else{

              if(k!=0 && mp.find(it.first+k)!=mp.end()){
                  cout<<it.first<<" ";
                  count++;
              }
            
            }
        }
        
        return count;
        
        
    }
};