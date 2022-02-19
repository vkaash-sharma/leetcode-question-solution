// Product of Array Except Self



// The Brute Force Approach for this question

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) 
    {
        vector<int> ans;
        int n = nums.size();
        int i = 0 ;
        
        while(i<n){
            int prefix = 0;
            int prefix_product = 1;
            int suffix = i+1;
            int suffix_product = 1;
            while(suffix < n){
                suffix_product *= nums[suffix];
                suffix++;
            }
            while(i!=0 && prefix < i){
                prefix_product *=nums[prefix];
                prefix++;
            }
            ans.push_back(suffix_product * prefix_product);
            i++;
        }
        return ans;
        
    
    }
};