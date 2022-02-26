class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int buy = prices[0];
        int ans = 0;
        for(int i = 1 ; i<prices.size() ;i++){
            
            if(buy < prices[i]){
                ans+=prices[i] - buy;
                buy = prices[i];
            }else{
                buy = prices[i];
            }
        }
        return ans;
    }
};


// same as the sell and buy stocks