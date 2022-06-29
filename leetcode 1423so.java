class Solution {
    public int maxScore(int[] cardPoints, int k) {
        int   n =  cardPoints.length;
        int j = n - k;
        int ans  = 0;
        int getSum = 0;
        while(j< n ){
            getSum+=cardPoints[j];
            j++;
        }
        
        ans= Math.max(ans,getSum);
        int i = 0;
        j = n - k;
        while(j < n){
            getSum-=cardPoints[j];
            j++;
            getSum+=cardPoints[i];
            i++;
            ans=Math.max(ans , getSum);
        }
        
        
        return ans ;
    }
}