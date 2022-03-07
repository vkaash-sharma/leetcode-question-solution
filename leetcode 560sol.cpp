class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        
        
        map<int,int > mp;
        mp[0] = 1;
        int sum = 0 ;
        int ans =0;
        for(int i = 0 ; i < nums.size() ; i++){
            
            sum +=nums[i];
            
            int remain = sum - k;
            
            if (mp.find(remain)!=mp.end()){
               ans+=mp[remain];
            }
            mp[sum]++;
             
        }
        
        return ans ;
    }
};


// we have to take the sum of the element and minus we the  given target so using this approach i can solve the entire solution4 