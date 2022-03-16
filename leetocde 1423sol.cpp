class Solution {
    public int maxScore(int[] cardPoints, int k) {
        
        int n = cardPoints.length;
        int ans = 0;
        int j = n - k;
        int getSum = 0;
        while(j < n){
       
            getSum+=cardPoints[j];
            
            j++;
        
        }
        
        ans = Math.max(ans , getSum);
        
        j = n - k;
        int i = 0;
        while(j < n){
            
            getSum-=cardPoints[j];
             j++;
            getSum+=cardPoints[i];
             i++;
            
            ans = Math.max(ans , getSum);
        }
        
        
        return ans;
        
        
        
        
    }
}
// i have to explore this question more
