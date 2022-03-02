class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        vector<int> ans ;
        int n = nums.size();
        int left[n];
        int right[n];
        int leftprod = 1;
        int rightprod = 1;
        
        for(int i = 0 ; i < nums.size() ; i++){
            
            left[i]= leftprod;
            right[n-i-1] = rightprod;
            leftprod=leftprod*nums[i];
            rightprod =rightprod*nums[n-i-1];
        }
        for(int i = 0 ; i< nums.size() ; i++){
            
            ans.push_back(left[i] * right[i]);
        }
        return ans;
        
    }
};

// we have to check the left product after writting the left product u have to trace the right product according to the answer hope u understand
