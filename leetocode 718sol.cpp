class Solution {
public:
    int findLength(vector<int>& nums1, vector<int>& nums2) {
        
        int m = nums1.size();
        
        int n = nums2.size();
        
        int ans = INT_MIN;
        
        
        vector<vector<int>> dp(m+1 , vector<int>(n+1 , 0));
        
        for(int i = 1 ; i<=m ; i++){
            for(int j = 1 ; j <=n ; j++){
  
                if(nums1[i - 1] == nums2[j - 1]){         
                dp[i][j] = 1 + dp[i - 1][j - 1];
                }     
                ans = max(ans , dp[i][j]);
                
            }
            
        }
        
        return ans;
        
        
    }
};

// in this question what we have to its really simple the things going  to  be super simple first we have to  to make the 2d vector and we have to run two loops first loof is for num1 and second is for num2 then what we have to do is check the element which equal in both array and store the count of the element at dp[i][j] position and we have to maintain a variable which can tell the max count int the array so for that reason we made a ans variable which take care of that .....
